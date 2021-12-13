//Input : 3
//Output : 6

#include<stdio.h>

int Addition(int);       //Declaration

int main()
{
	int iNo = 0, iRet = 0;
	 
	printf("Enter a Number.\n");
	scanf("%d",&iNo);
	
	iRet = Addition(iNo);
	printf("Addition is %d\n", iRet);
	
	return 0;
}

int Addition(int iValue)         //Defination int-signed integer
{
	int iSum = 0, iCnt = 0;
	
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	
	for(iCnt = 1; iCnt <= iValue; iCnt++)
	{
		iSum = iSum + iCnt;
	}
	
	return iSum;
}
