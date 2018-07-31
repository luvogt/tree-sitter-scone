module.exports = grammar({
  name: 'scone',

  //externals: $ => [$._newline],

  rules: {
    // The production rules of the context-free grammar

    //Main Structure
    source_file: $ => seq($.feature,optional($.background),repeat($.scenario)),
    feature: $ => seq(repeat($.tag),'Feature:',$.title,$.eol,$.narrative),      //$._newline
    title: $ => /.+/,
    narrative: $ => prec.left(repeat1(/\S/)),                                   // ist das nicht eigentlich falsch?  //[^] /.+/
    background: $ => seq('Background:',optional($.language_setting),repeat($.import)),
    tag: $ => /[@].+/,                                                          //'a space delimited string starting with @'
    language_setting: $ => seq($.asterisk,'Language',$.space,$.language_ID),
    language_ID: $ => choice('%OWL','%CommonLogic'),
    import: $ => seq($.asterisk,'Test',$.space,optional('the ontology'),$.uriref),

    //Scenarios
    scenario: $ => seq(repeat($.tag),$.scenario_head,$.scenario_body),
    scenario_head: $ => seq('Scenario:',$.title,$.eol,$.narrative,optional($.language_setting)),
    scenario_body: $ => repeat1(choice($.assumption,$.test)),
    assumption: $ => seq(choice($.Given,$.And),optional($.that),$.sentence,optional($.dot)),
    test: $ => seq(choice($.Then,$.And),choice($.inference_test,$.consistency_test),optional($.dot)),
    inference_test: $ => seq(optional($.donot),$.infer,optional($.that),$.infer_sentence),
    consistency_test: $ => seq($.the,'scenario',$.space,$.is,$.consistency),
infer: $ => seq('infer',$.space),
    //Sentences
    sentence: $ => choice($.definition,$.proposition,$.fact,$.source),
    infer_sentence: $ => choice($.definition,$.universal,$.fact,$.source),
    definition: $ => choice(
      seq($.pos_class,$.is_defined_as,$.class_expression),
      seq($.class_name,$.is_enumerated_as,$.indiv_name, repeat(seq($.and, $.indiv_name)))
    ),//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    is_enumerated_as: $ => seq('is enumerated as',$.space),
    proposition: $ => choice($.universal,$.particular),
    universal: $ => choice($.universal_positive,$.universal_negative),
    universal_positive: $ => choice(
      seq($.every,$.class_name,$.is,$.class_expression),
      seq($.class_name,$.is_a_subclass_of,$.class_expression)
    ),
    a: $ => seq('a',$.space),
    subclass: $ => seq('subclass',$.space),
    of: $ => seq('of',$.space),
    //subclass_of: $ => seq($.is,$.a,$.subclass,$.of),
    is_a_subclass_of: $ => seq('is a subclass of',$.space),
    //subclass: $ => token($.subclass_of),
    every: $ => seq('every',$.space),//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    universal_negative: $ => choice(
      seq($.no,$.class_name,$.is,$.a,$.class_expression),
      seq($.qname_list,$.are,$.disjoint)//class_name
    ),
    disjoint: $ => seq('disjoint'/*,$.space*/),
    no: $ => seq('no',$.space),
    class_list: $ => seq($.class_name,repeat1(seq($.and,$.class_name))),
    qname_list: $ => seq($.qname,repeat1(seq($.and,$.qname))),
    particular: $ => seq(
      $.some,$.class_name,choice($.are,$.arenot),$.class_expression
    ),
    are: $ => seq('are',$.space),
    arenot: $ => seq(choice('aren’t','aren\'t','are not'),$.space),

    fact: $ => choice($.instance,$.relation,$.equation,$.different),
    instance: $ => seq($.indiv_name,choice($.is,$.isnot),$.class_expression),
    relation: $ => seq($.indiv_name,$.predicate_phrase,$.indiv_name),
    equation: $ => seq(
      $.qname,$.the_same_as, /*'the same as',*/ $.qname //indiv_name
    ),
    the_same_as: $ => seq(choice('is the same as','isn\'t the same as'),$.space),
    different: $ => seq(
      $.qname_list,$.are,$.different_KW  //indiv_name
    ),
    different_KW: $ => seq('different'/*,$.space*/),
    indiv_list: $ => seq($.indiv_name,repeat1(seq($.and,$.indiv_name))),
    are_different: $ => 'are different', //#####
    source: $ => seq(
      $.language_ID,$.delimiter,$.source_body,$.delimiter
    ),
    source_body: $ => repeat1(choice(     //'some syntactically valid expression in the identified ontology language'
      /[^"]/,
      /"[^"]/,
      /""[^"]/
    )),
    delimiter: $ => '"""', // EOL fehlt (für Syntaxhighlighting nicht wichtig?) seq('\n', '"""', '\n') funktioniert nicht wie gewünscht


    //Terms
    class_expression: $ => choice($.class_atom,$.conjunction,$.disjunction,$.qualified_class),
    pos_class: $ => seq(optional(choice($.a,$.an)),$.class_name),
    class_atom: $ => seq(optional($.not),$.pos_class),

    conjunction: $ => choice(
      seq($.pos_class,repeat1(seq($.and,$.class_atom))),
      seq($.neither,$.pos_class,repeat1(seq($.nor,$.pos_class)))
    ),
    disjunction: $ => seq(
      $.class_atom,repeat1(seq($.or,$.class_atom))
    ),
    qualified_class: $ => seq(
      $.pos_class,optional($.comma),$.pronoun,$.qualifier
    ),
    qualifier: $ => choice(
      seq($.is,$.class_expression),
      seq($.predicate_phrase,$.quantifier,$.class_expression)
    ),
    quantifier: $ => choice($.some,$.only),
    predicate_phrase: $ => choice(
      seq($.predicate_open,$.predicate_name),
      seq(choice($.is,$.isnot),optional(choice($.a,$.an,$.the)),$.predicate_fragement,$.predicate_end)
    ),
    predicate_open: $ => choice(
      $.does,
      $.doesnot,
      seq(choice($.has,$.hasnot),$.as)                                          //was soll das heißen?
    ),
    predicate_end:$ => seq(choice('of','than','to','on','in'),$.space),


    class_name: $ => $.qname,
    predicate_name: $ => $.qname,
    predicate_fragement: $ => $.qname,
    //indiv: $ => $.qname,
    indiv_name: $ => $.qname,//prec(1,$.qname),   //prec(1,
    qname: $ => /\S*[\w>]/, // darf so auch auf > enden --> nachfragen //später nochmal schauen/S*[^\.]/,///\S*\w/, // muss auf ein alphanumerisches Zeichen enden //prec.left(repeat1(/\S/)), /\S+(?![,\.].)/
    uriref: $ => /\S+/, //prec.left(repeat1(/\S/)),
    //---------------------
    And: $ => seq('And',$.space),
    Given: $ => seq('Given',$.space),
    Then: $ => seq('Then',$.space),
    then: $ => 'Then ',
    consistency: $ => choice('consistent','inconsistent'),
    is_defined_as: $ => 'is defined as ',
    infer_start: $ => seq(
      optional('don\'t '),
      'infer ',
      optional('that ')
    ),
    asterisk: $ => '*',
    full_stop: $ => '.',
    BGround: $ => 'Background:',
    That: $ => 'that',


    //------------------------

    space: $ => ' ',//repeat1(/\s/), ///\s+/,
    //rule(:space?) { space.maybe }
    eol: $ => repeat1(/[\r\n]/),
    //rule(:crlf) { match('[\r\n]').repeat(1) }
    //rule(:line_end) { crlf >> space? }
    //rule(:eol) { line_end.repeat }

    and: $ => seq(choice('and'/*,'And'*/),$.space),
    neither: $ => seq('neither',$.space),
    nor: $ => seq('nor',$.space),
    or: $ => seq('or',$.space),
    comma: $ => seq(',',$.space),
    the: $ => seq('the',$.space),
    an: $ => seq('an',$.space), //!!!!!!!!!!!!!!!
    as: $ => seq('as',$.space),
    pronoun: $ => seq(choice('who','which','that'),$.space),
    some: $ => seq('some',$.space),
    only: $ => seq('only',$.space),

    does: $ => seq('does',$.space),
    has: $ => seq('has',$.space),
    is: $ => seq('is',$.space),

    not: $ => seq('not',$.space),
    does: $ => seq('does',$.space),
    doesnot: $ => seq(choice('doesn’t','doesn\'t','does not'),$.space),
    hasnot: $ => seq(choice('hasn’t','hasn\'t','has not'),$.space),
    has: $ => seq('has',$.space),
    isnot: $ => seq(choice('isn’t','isn\'t','is not'),$.space),

    //-------------------
    given: $ => seq(choice('given','Given'),$.space),
    then: $ => seq(choice('then','Then'),$.space),
    consistency: $ => choice('consistent','inconsistent'),
    defined: $ => seq('defined',$.space),
    enumerated: $ => seq('enumerated',$.space),
    asterisk: $ => '*',
    dot: $ => '.',
    that: $ => seq('that',$.space),
    donot: $ => seq('don\'t',$.space),
  }
});
