#include<stdio.h>

int CountEven(int);

int main()
{
	int iValue=0, iRet = 0;
	
	printf("Enter value.\n");
	scanf("%d\n",&iValue);
	
	iRet = CountEven(iValue);
	printf("Numbers of even digits are :%d\n",iRet);
	
	return 0;
}

int CountEven(int iNo)
{
	int iDigit = 0,iCnt = 0;
	
	if(iNo == 0)
	{
		return 1;
	}
	
	if(iNo > 0)
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		iDigit = iNo % 10;          
		if((iDigit % 2)== 0)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}