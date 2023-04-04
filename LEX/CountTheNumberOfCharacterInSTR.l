%{
	#include<stdio.h>
	int count = 0;
%}

%%
[A-Z]	{
		printf("%s capital letter\n",yytext);
		count++;
	}

.	{
		printf("%s isn't capital letter\n",yytext);
	}
\n	{
		printf("%s Here is new line\n",yytext);
	}
%%
int yywrap()
{

}
int main()
{
	yylex();
	printf("\nNumber of Capital letters in the given input - %d\n", count);

	return 0;
}