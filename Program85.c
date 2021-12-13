
//Accept N no of user and last occurence of the searching number.
//time complexity : best case 1 ,   Worst case : n

#include<stdio.h>
#include<stdlib.h>

int LastOccurence(int *Brr ,int iLen,int iNo)
{
	int iCnt = 0,index = 0;
	
	for(iCnt = 0; iCnt < iLen; iCnt++)
	{
		if(*Brr == iNo)
		{
			index = iCnt;
		}
		
		Brr++;
	}
	return iCnt;
}

int main()
{
	int *Arr = NULL;
	int iCnt = 0, iSize = 0, iValue = 0, iRet = 0;
	
	printf("Enter the number of elements.\n");
	scanf("%d",&iSize);
	
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
	
	printf("Enter the numbr you want to check.\n");
	scanf("%d",&iValue);
	
	iRet =LastOccurence(Arr, iSize,iValue);
	
	if(iRet == -1)
	{
		printf("Number is not there.\n");
	}
	else
	{
		printf("Number is  there at : \t%d",iRet);
	}
	
	free(Arr);
	
	return 0;
	
}