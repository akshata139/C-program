#include<stdio.h>

void Display(int);

int main()
{
	int iValue=0;
	
	printf("Enter value.\n");
	scanf("%d\n",&iValue);
	
	Display(iValue);
	
	return 0;
}

void Display(int iNo)
{
	int iDigit = 0;
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;          
		printf("%d\n",iDigit);			
		iNo = iNo / 10;
	}
}