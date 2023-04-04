%option noyywrap
%{
	#include<stdio.h>
%}

%%

int|float|double|char|void {
	    printf("Keyword: %s\n", yytext);
	    /* Do other processing here */
}

[a-zA-Z][a-zA-Z0-9]* {
	    printf("Identifier: %s\n", yytext);
	    /* Do other processing here */
}
\\n {
    printf("Newline character\n");
    /* Do other processing here */
}

\\t {
    printf("Tab character\n");
    /* Do other processing here */
}

\%[a-z]+ {
	printf("Format Specifier : %s\n",yytext);
}

[0-9]+ {
	printf("Integer Number : %s\n",yytext);
}

[0-9]*\.[0-9]+ {
    printf("Floating point constant: %s\n", yytext);
    /* Do other processing here */
}

[+*/=] {
    printf("Operator: %s\n", yytext);
    /* Do other processing here */
}

[();,] {
    printf("Punctuation: %s\n", yytext);
    /* Do other processing here */
}

%%
int main()
{
	yylex();
	return 0;
}