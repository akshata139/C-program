//Input : 3
//Output : 6

#include<stdio.h>

int Factorial(int);       //Declaration

int main()
{
	int iNo = 0, iRet = 0;
	 
	printf("Enter a Number.\n");
	scanf("%d",&iNo);
	
	iRet = Factorial(iNo);
	printf("Factorial is %d\n", iRet);
	
	return 0;
}

int Factorial(int iValue)         //Defination int-signed integer
{
	int iFact = 1, iCnt = 0;
	
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	
	for(iCnt = 1; iCnt <= iValue; iCnt++)
	{
		iFact = iFact * iCnt;
	}
	
	return iFact;
}
