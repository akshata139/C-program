#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrom(int);

int main()
{
	 int iValue = 0;
	 bool bRet = false;
	
	printf("Enter Number .\n");
	scanf("%d\n",&iValue);
	
	bRet = CheckPallindrom(iValue);
	if(bRet == true)
	{
		printf("Number is pallindrom.\n");
	}
	
	else
	{
		printf("Number is not pallindrom.\n");
	}
	
	return 0;
}

bool CheckPallindrom(int iNo)
{
	int iDigit = 0,iRev = 0;
	int iTemp = iNo;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		
		iNo = iNo / 10;
	}
	
	if(iRev == iTemp)
	{
		return true;
	}
	
	else
	{
		return false;
	}
}