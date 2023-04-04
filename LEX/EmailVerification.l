/* %{
	#include<stdio.h>
%}

%%

[a-z0-9.]+"@gmail.com" {
	printf("Valid\n");
}

.+ {
	printf("Invalid\n");
}

%%

int yywrap()
{
	return 1;
}

int main()
{
	printf("Enter a gmail address : \n");
	yylex();
	return 0;
}*/

/*lex code to accept a valid email 
%{
int flag = 0; 
%} 
%%
[a - z.0 - 9 _] + @[a - z] + ".com" | ".in"
	flag = 1; 
%%
int main() 
{
	yylex();
	if (flag == 1)
		printf("Accepted");
	else
		printf("Not Accepted");
}
*/


%{
#include <stdio.h>
%}

%%
[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,} {
    printf("%s is a valid email address.\n", yytext);
}

.|\n {
    // ignore other characters
}

%%
int yywrap()
{
	return 1;
}


int main() {
    yylex();
    return 0;
}
