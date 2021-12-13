#include<stdio.h>

int RevOfFactors(int);

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number.\n");
	scanf("%d",iValue);
	
	iRet = RevOfFactors(iValue);
	printf("%d",iRet);
	
	return 0;
}

int RevOfFactors(int iNo)
{
	int i = 0;
	
	for(i = 1; i < iNo; i++)
	{
		if((iNo % i) == 0)
		{
			return i--;
		}
	}
	
}