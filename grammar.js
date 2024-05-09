/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const operators = [
  "-", "-=", "!=", "*", "**", "**=",
  "*=", "/", "//", "//=", "/=", "&",
  "&=", "%", "%=", "^", "^=", "+",
  "->", "+=", "<", "<<", "<<=", "<=",
  "<>", "=", ":=", "==", ">", ">=",
  ">>", ">>=", "|", "|=", "~", "@=",
  "and", "in", "is", "not", "or",
]

module.exports = grammar({
  name: "jinja2",

  word: $ => $.identifier,

  rules: {
    template: $ => repeat(choice(
      $.jinja_statement,
      $.jinja_expression,
      $.jinja_comment,
      $._text,
    )),

    // Jinja2 statements
    jinja_statement: $ => seq(
      /\{%-?/,
      $._expression,
      /-?%\}/,
    ),

    // Jinja2 expressions
    jinja_expression: $ => seq(
      '{{',
      $._expression,
      '}}',
    ),

    // Jinja2 comments
    jinja_comment: $ => seq(
      '{#',
      repeat(/./),
      '#}',
    ),

    // Content
    _expression: $ => choice(
      $.keyword,
      $.identifier,
      $.fn_declaration,
      $._primitive,
      $.wrappers,
      $._dot_index,
      $.unary_expression,
      $.binary_expression,
    ),

    _primitive: $ => choice(
      $.string,
      $.integer,
      $.float,
      $.boolean,
      $.none,
    ),

    _dot_index: $ => prec(4, seq(
      $.identifier,
      optional(repeat1(seq('.', $.identifier)))
    )),

    fn_declaration: $ => prec.left(3, seq(
      field('name', $.identifier),
      '(',
      field('arguments', optional($._parameters)),
      ')'
    )),

    _parameters: $ => repeat1(seq($._expression, optional(','))),

    wrappers: $ => choice(
      $._parenthesis,
      $._bracket,
      $._braces,
    ),

    _parenthesis: $ => seq(
      '(',
      optional($._expression),
      ')',
    ),

    _bracket: $ => seq(
      '[',
      optional($._expression),
      ']',
    ),

    _braces: $ => seq(
      '{',
      optional($._expression),
      '}',
    ),

    boolean: $ => choice(
      'True',
      'False',
    ),

    none: $ => 'None',

    float: $ => /\d*\.\d+/,

    integer: $ => /\d+/,

    string: $ => choice(
      /".*"/,
      /'.*'/,
    ),

    unary_expression: $ => choice(
      prec.left(1, seq($.keyword, $._expression))
    ),

    binary_expression: $ => choice(
      prec.left(2, seq($._expression, $.operator, $._expression))
    ),

    identifier: $ => /[a-z_]+/,


    keyword: $ => choice(
      'if',
      'elif',
      'else',
      'endif',
      'for',
      'endfor',
      'while',
      'endwhile',
      'macro',
      'endmacro',
      'set',
    ),

    operator: $ => choice(...operators),

    _text: $ => prec.left(1, repeat1(/./))

  },
});
