%{
#include <stdio.h>
%}

%%
"/*"    { /* Found the beginning of a comment */
         while(1) {
            char c = input();
            if(c == '*') {
                char d = input();
                if(d == '/') {
                    /* Found the end of a comment */
                    break;
                } else {
                    unput(d);
                }
            }
         }
         printf("Found a comment\n");
       }
"//"    { /* Found a comment */
         while(1) {
            char c = input();
            if(c == '\n') {
                /* Found the end of a comment */
                unput(c);
                break;
            }
         }
         printf("Found a comment\n Line Number : %d",yyleng);
       }
.      ;   /* Ignore all other characters */
%%

int yywrap()
{	
	return 1;
}

int main() {
    yylex();
    return 0;
}
