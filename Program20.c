
#include<stdio.h>
#include<ctype.h>

char ConvChar(char);

int main()
{
	char cValue = '\0';
	
	printf("Enter character\n");
	scanf("%c",cValue);
	
	ConvChar(cValue);
	
	return 0;
}

char ConvChar(char cNo)
{
	if(islower(cNo))
	{
		cNo = toupper(cNo);
		printf("%c",cNo);
	}
	else if(isupper(cNo))
	{
		cNo = tolower(cNo);
		printf("%c",cNo);
	}
}
