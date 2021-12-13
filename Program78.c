
//Accept N no of user and Return the largest number.


#include<stdio.h>
#include<stdlib.h>

int Maximum(int Brr[], int iLen)
{
	int iCnt = 0,iLarge = Brr[iCnt];
	
	for(iCnt = 0; iCnt < iLen; iCnt++)
	{
		if(iLarge < Brr[iCnt])
		{
			iLarge = Brr[iCnt];
		}
	}
	
	return iLarge;
}

int main()
{
	int *Arr = NULL;
	int iCnt = 0, iSize = 0,iRet = 0;
	
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
	
	iRet = Maximum(Arr, iSize);
	printf("Maximum number is :%d\n",iRet);
	
	free(Arr);
	
	return 0;
	
}