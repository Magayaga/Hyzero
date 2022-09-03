// Hyzero programming language — Pre-Alpha version of the Private
// Copyright 2022 Cyril John Magayaga (https://github.com/magayaga) (https://facebook.com/Cyrilnotes)
// Copyright 2001-2022 Python Software Foundation (https://www.python.org/psf)

#include <stdio.h>

int main() {
    printf("Hyzero programming language (v0.1.4) - created and developed by Cyril John Magayaga\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("statements  : NEWLINE* statement (NEWLINE+ statement)* NEWLINE*\n");
    printf("\n");
    printf("statement   : KEYWORD:RETURN expr?\n");
    printf("            : KEYWORD:CONTINUE\n");
    printf("            : KEYWORD:BREAK\n");
    printf("            : expr\n");
    printf("\n");
    printf("expr        : KEYWORD:VAR IDENTIFIER EQ expr\n");
    printf("            : comp-expr ((KEYWORD:AND|KEYWORD:OR) comp-expr)*\n");
    printf("\n");
    printf("comp-expr   : NOT comp-expr\n");
    printf("            : arith-expr ((EE|LT|GT|LTE|GTE) arith-expr)*");
    printf("\n");
    printf("arith-expr  :	term ((PLUS|MINUS) term)*\n");
    printf("\n");
    printf("term        : factor ((MUL|DIV) factor)*\n");
    printf("\n");
    printf("factor      : (PLUS|MINUS) factor\n");
    printf("            : power\n");
    printf("\n");
    printf("power       : call (POW factor)*\n");
    printf("\n");
    printf("call        : atom (LPAREN (expr (COMMA expr)*)? RPAREN)?\n");
    printf("\n");
    printf("atom        : INT|FLOAT|STRING|IDENTIFIER\n");
    printf("            : LPAREN expr RPAREN\n");
    printf("            : list-expr\n");
    printf("            : if-expr\n");
    printf("            : for-expr\n");
    printf("            : while-expr\n");
    printf("            : func-def\n");
    printf("\n");
    printf("list-expr   : LSQUARE (expr (COMMA expr)*)? RSQUARE\n");
    printf("\n");
    printf("if-expr     : KEYWORD:IF expr KEYWORD:THEN\n");
    printf("              (statement if-expr-b|if-expr-c?)\n");
    printf("            | (NEWLINE statements KEYWORD:END|if-expr-b|if-expr-c)\n");
    printf("\n");
    printf("if-expr-b   : KEYWORD:ELIF expr KEYWORD:THEN\n");
    printf("              (statement if-expr-b|if-expr-c?)\n");
    printf("            | (NEWLINE statements KEYWORD:END|if-expr-b|if-expr-c)\n");
    printf("\n");
    printf("if-expr-c   : KEYWORD:ELSE\n");
    printf("              statement\n");
    printf("            | (NEWLINE statements KEYWORD:END)\n");
    printf("\n");
    printf("for-expr    : KEYWORD:FOR IDENTIFIER EQ expr KEYWORD:TO expr \n");
    printf("              (KEYWORD:STEP expr)? KEYWORD:THEN\n");
    printf("              statement\n");
    printf("            | (NEWLINE statements KEYWORD:END)\n");
    printf("\n");
    printf("while-expr  : KEYWORD:WHILE expr KEYWORD:THEN\n");
    printf("              statement\n");
    printf("            | (NEWLINE statements KEYWORD:END)\n");
    printf("\n");
    printf("func-def    : KEYWORD:FUN IDENTIFIER?\n");
    printf("              LPAREN (IDENTIFIER (COMMA IDENTIFIER)*)? RPAREN\n");
    printf("              (ARROW expr)\n");
    printf("            | (NEWLINE statements KEYWORD:END)\n");
    printf("\n");
    printf("Use ((./hyzeroHelp or hyzeroHelp.exe)) for more information about that topic.\n");
    return 0;
}