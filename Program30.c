#include<stdio.h>
#include<stdbool.h>

int Reverse(int);
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

int Reverse(int iNum)
{
	int iDigit = 0,iRev = 0;
	
	while(iNum != 0)
	{
		iDigit = iNum % 10;
		iRev = (iRev * 10) + iDigit;
		
		iNum = iNum / 10;
	}
	return iRev;
}

bool CheckPallindrom(int iNo)
{
	int iNumber = 0;
	iNumber = Reverse(iNo);
	
	if(iNumber == iNo)
	{
		return true;
	}
	
	else
	{
		return false;
	}
}