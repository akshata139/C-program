#include<stdio.h>

int MultOfFactors(int);

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number.\n");
	scanf("%d",iValue);
	
	iRet = MultOfFactors(iValue);
	printf("Multiplication of factors is :\n%d",iRet);
	
	return 0;
}

int MultOfFactors(int iNo)
{
	int i = 0;
	int iMul = 1;
	
	for(i = 1; i < iNo; i++)
	{
		if((iNo % i) == 0)
		{
			printf("%d",i);
		}
		
		iMul = iMul * i;
		return iMul;
	}
	
}