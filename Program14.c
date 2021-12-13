//Input : 3
//Output : 6

#include<stdio.h>
typedef unsigned long int UINT;

UINT Factorial(int);       //Declaration

int main()
{
	int iNo = 0;
	UINT iRet = 0;
	 
	printf("Enter a Number.\n");
	scanf("%d",&iNo);
	
	iRet = Factorial(iNo);
	printf("Factorial is %d\n", iRet);
	
	return 0;
}

UINT Factorial(int iValue)         //Defination int-signed integer
{
	UINT iFact = 1;
	int iCnt = 1;
	
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	
	
	
	
	
	
	
	
	
	/*for(iCnt = 1; iCnt <= iValue; iCnt++)
	{
		iFact = iFact * iCnt;
	}
	*/
    
	while(iCnt<=iValue)
	{
		iFact = iFact * iCnt;
		iCnt++;
	}
	
	return iFact;
}
