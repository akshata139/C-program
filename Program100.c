#include<stdio.h>

char CapitaltoSmall(char c)
{
	
	if((c >= 'A') && (c <= 'Z'));
	{
		return c+32;
	}
}

int main()
{
	char ch = '\0';
	char cRet = '\0';
	
	
	printf("Enter character.\n");
	scanf("%c",&ch);
	
	cRet = CapitaltoSmall(ch);
	
	printf("capital to small is : %c\t",cRet);
	
	return 0;
	
}