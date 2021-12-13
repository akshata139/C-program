#include<stdio.h>

int Power(int, int);

int main()
{
	int iValue1 = 0, iValue2 = 0,iRet = 0;
	
	printf("Enter base value.\n");
	scanf("%d\n",iValue1);
	
	printf("Enter power value.\n");
	scanf("%d\n",iValue2);
	
	iRet = Power(iValue1, iValue2);
	printf("Result is.\n",iRet);
	
	return 0;
}

int Power(int iNo1, int iNo2)
{
	int iCnt = 0;
	int	iMul = 1;
	
	for(iCnt = 1;iCnt <= iNo2; iCnt++)
	{
		iMul = iMul * iCnt;
	}
	
	return iMul;
}