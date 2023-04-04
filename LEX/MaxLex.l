%{

	long long int max = -1;
	int line_no = 0;

%}

DIGIT[0-9]

%%
{DIGIT}+ {
		printf("Number Found : %s Length : %d\n",yytext,yyleng);
		
		long long int t = atoi(yytext);
		if(t>max)
		{
			max = t;
		}

	}
\n {++ line_no;}
. {}
%%

int yywrap()
{	
	return 1;
}
int main(void)
{
	yylex();
	printf("Maximum Number Is : %d\n",max);
	printf("Line Number Is : %d\n",line_no);
	return 0;
}