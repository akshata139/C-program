#include<stdio.h>

void Display(int);

int main()
{
	int iValue = 0;
	
	printf("Enter value.\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}

void Display(int iNo)
{
	int iCnt = 0;
	char ch = 'a';
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%c\t",ch);
		ch++;
	}
	
	printf("\n");
}