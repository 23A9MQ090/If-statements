#include<stdio.h>
int main ()
{
	char n;
	scanf("%c",&n);
	if (n>='a'&&n<='z')
	{
		printf("Lower case");
	}
	else if (n>='A'&&n<='Z')
	{
		printf("Upper case");
	}
	else if (n>='0'&&n<='9')
	{
		printf("Digits");
	}
	else 
	{
		printf("Special Character");
	}
}
