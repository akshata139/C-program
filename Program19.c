//Accept no. from user and Print even factors of that no.

#include<stdio.h>

int DisplayEvenFact(int);

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number .\n");
	scanf("%d",iValue);
	
	iRet = DisplayEvenFact(iValue);
	printf("Even Factors are :%d\n", iRet);
	
	return 0;
}

int DisplayEvenFact(int iNo)
{
	int i = 0;
	int iRes = 0;
	for(i = 1; i < iNo; i++)
	{
		if((iNo % i) == 0 && (i % 2) == 0)
		{
            printf("%d\n",i);
		}
		
		return iRes;
	}
}