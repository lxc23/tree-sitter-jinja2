# tree-sitter-jinja2

The purpose of this project is to be a tree-sitter parser for files that use jinja templating. I was tired of looking at plain white text, so I made this.

## Description

Use as you will. Personally, I use tree-sitter with [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter). If you'd like to do the same, instructions can be found in their repo. The parser parses only jinja2 syntax, and looks like the following:

![Screenshot from 2024-05-08 22-31-46](https://github.com/lxc23/tree-sitter-jinja2/assets/82051673/805904fe-a1b6-4907-bc25-eeba5150d8cb)

### Installing

* Clone the repository and follow instructions [here](https://tree-sitter.github.io/tree-sitter/creating-parsers).

### Executing program

* one you have the tree-sitter cli you can run and test with
```
tree-sitter generate
tree-sitter test
```

## Help

Feel free to report any common problems or issues.


## Version History

* 0.2
    * Actually highlights more than 1 color
* 0.1
    * Alpha Release

## License

This project is licensed under the Apache License - see the LICENSE.md file for details
