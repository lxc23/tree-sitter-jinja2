/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "jinja2",

  rules: {
    // Main entry point
    template: $ => repeat(choice(
      $.statement,
      $.expression,
      $.comment,
      $._text,
    )),

    // Jinja2 statements
    statement: $ => seq(
      '{%',
      new RegExp('([^%]|%[^}])*%}'),
    ),

    // Jinja2 expressions
    expression: $ => seq(
      '{{',
      new RegExp('[^}}]*}}'),
    ),

    // Jinja2 comments
    comment: $ => seq(
      '{#',
      new RegExp('([^#]|#[^}])*#+}'),
    ),

    // Everything else
    _text: $ => new RegExp('.')
  },
});
