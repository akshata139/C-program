//////////////////////////////////////////////////
//Program to divide two numbers.
//////////////////////////////////////////////////

#include<stdio.h>

float Division(int, int);

int main()  
{
	int iNo1 = 0, iNo2 = 0;
	float fRet = 0.0;
	
	printf("Enter first number.\n");
	scanf("%d",&iNo1);
	
	printf("Enter second number.\n");
	scanf("%d",&iNo2);
	
	fRet = Division(iNo1, iNo2);
	printf("Division is.\n%d",fRet);
	
	return 0;
}

float Division(int iValue1, int iValue2)
{
	float iDiv;
	
	iDiv = (iValue1 / iValue2);
	
	return iDiv;
}