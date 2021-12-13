
//Accept N no of user and Return the largest number.
//time complexity : best case 1 ,   Worst case : n

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int *Brr , int iLen,int iNo)
{
	int iCnt = 0;
	bool bAns = false;                        //flag
	
	for(iCnt = 0; iCnt < iLen; iCnt++)
	{
		if(*Brr == iNo)
		{
			bAns = true;
			break;
		}
		
		Brr++;
	}
	
	return bAns;
}

int main()
{
	int *Arr = NULL;
	int iCnt = 0, iSize = 0, iValue = 0;
	bool bRet = false;
	
	printf("Enter the number of elements.\n");
	scanf("%d",&iSize);
	
	printf("Enter the numbr you want to check.\n");
	scanf("%d",&iValue);
	
	Arr = (int*)malloc( sizeof(int) * iSize);
	
	if(Arr == NULL)
	{
		printf("Unable to allocate memory.\n");
		return -1;
	}
	
	printf("Enter the elements.\n");
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	printf("Entered date is :\t");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("%d\t",Arr[iCnt]);
	}
	printf("\n");
	
	bRet = CheckNumber(Arr, iSize,iValue);
	
	if(bRet == true)
	{
		printf("Number is there.\n");
	}
	else
	{
		printf("Number is not there.\n");
	}
	
	free(Arr);
	
	return 0;
	
}