/////////////////////////////////////////////////////
//Input : 5
//Output : * * * * *
////////////////////////////////////////////////////

#include<stdio.h>                // #-handled by preprocessor.

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
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("*\t");
	}
}