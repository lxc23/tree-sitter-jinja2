
; Variables
(identifier) @variable

; Functions
(fn_declaration) @punctuation
(fn_declaration
  name: (identifier) @function
  )

; Literals
[
 (none)
 (boolean)
] @constant.builtin

[
 (float)
 (integer)
] @number

(jinja_comment) @comment
(string) @string

(wrappers) @punctuation

(jinja_expression) @tag
(jinja_statement) @tag

(operator) @operator

[
  (keyword)
  "and"
  "or"
  "in"
  "is"
  "not"
] @keyword
