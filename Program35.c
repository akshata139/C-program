#include<stdio.h>

int Power(int, int);

int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	
	printf("Enter first value.\n");
	scanf("%d",&iValue1);
	
	printf("Enter second value.\n");
	scanf("%d",&iValue2);
	
	iRet = Power(iValue1, iValue2);
	printf("Result is :%d\n",iRet);
	
	return 0;
}

int Power(int iNo1, int iNo2)
{
	int iMult = 1;
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iNo2; iCnt++)
	{
		iMult = iNo1 * iMult;
	}
	
	return iMult;
}