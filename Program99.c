#include<stdio.h>

char SmallToCapital(char c)
{
	
	if((c >= 'a') && (c <= 'z'));
	{
		return c-32;
	}
}

int main()
{
	char ch = '\0';
	char cRet = '\0';
	
	
	printf("Enter character.\n");
	scanf("%c",&ch);
	
	cRet = SmallToCapital(ch);
	
	printf("Small to capital is : %c\t",cRet);
	
	return 0;
	
}