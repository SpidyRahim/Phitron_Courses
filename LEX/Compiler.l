%{
#include <stdio.h>
%}

/* Match white space */
[ \t]+

/* Match identifiers */
[A-Za-z_][A-Za-z0-9_]* {
    printf("Identifier: %s\n", yytext);
}

/* Match single-line comments */
\/\/[^\n]*

/* Match multi-line comments */
\/\*([^*]|\*+[^*/])*\*+\/

%%

/* List of keywords */
int|float|double|char|if|else|for|while|do|return

%%

int main() {
    yylex();
    return 0;
}
