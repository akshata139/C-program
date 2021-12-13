#include<stdio.h>


int CountZero(int iNo);

int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter value.\n");
	scanf("%d",iValue);
	
	iRet = CountZero(iValue);
	printf("Count of even numbers are :\n",iRet);
	
	return 0;
}

int CountZero(int iNo)
{
	int iDigit = 0, iCnt = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		
		 if((iDigit % 2) == 0)
		 {
			 iCnt++;
		 }
		 
		 iNo = iNo / 10;
	}
	return iCnt;
}