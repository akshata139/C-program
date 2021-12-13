#include<stdio.h>

int Addition(int, int);

int Subtraction(int, int);

int main()
{
	int iValue1 = 0, iValue2 = 0;
	int iSum = 0, iSub = 0;
	
	printf("Enter first value.\n");
	scanf("%d",&iValue1);
	
	printf("Enter second value.\n");
	scanf("%d",&iValue2);
	
	iSum = Addition(iValue1, iValue2);
	printf("Addition is:%d\n",iSum);
	
	iSub = Subtraction(iValue1, iValue2);
	/*if(iValue1 == char)
	{
		printf("Invalid Input.\n");
	}
	
	if(iValue2 == char)
	{
		printf("Invalid Input.\n");
	}
	*/ 
	printf("Subtraction is:%d\n",iSub);
	
	return 0;
}

int Addition(int iNo1, int iNo2)
{
	int Summation = 0;
	
	Summation = iNo1 + iNo2;
	
	return Summation;
}

int Subtraction(int iNo1, int iNo2)
{
	int subtraction = 0;
	
	subtraction = iNo1 - iNo2;
	
	return subtraction;
}