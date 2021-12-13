#include<stdio.h>

void Display(int);

int main()
{
	int iValue = 0;
	
	printf("Enter value.\n");
	scanf("%d",iValue);
	
	Display(iValue);
	
	return 0;
}

void Display(int iNo)
{
	int iDigit = 0;
	int iCnt = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		
		printf("%d",iDigit);
		
		iNo = iNo / 10;
	}
}