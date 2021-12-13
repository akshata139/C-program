#include<stdio.h>

int FactDiff(int iNo)
{
	int i = 0, j = 0;
	int iSum1 =0, iSum2 =0;
	int iDiff = 0;
	int iRes1=0, iRes2 = 0;
	
	for(i = 1; i < iNo; i++)
	{
		for(j = 1; j < iNo; j++)
		{
			if((iNo % j) == 0)
			{
				iRes1 = printf("%d\n",j);
			}
			printf("%d",iRes1);
		}
		if((iNo % i) != 0)
		{
			iRes2 = printf("%d\n",i);
		}
		printf("%d",iRes2);
		
		iSum1 = iSum1 + i;
		//printf("%d\n",iSum1);
			
		iSum2 = iSum2 + j;
     	//printf("%d\n",iSum2);
			
		iDiff = iSum1 - iSum2;
	}
	
	return iDiff;
}

int main()
{
int iValue = 0;
int iRet = 0;

printf("Enter number : \n");
scanf("%d",&iValue);

iRet = FactDiff(iValue);
printf("Difference is :%d\n",iRet);*

return 0;
}
