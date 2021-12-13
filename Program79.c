
//Accept N no of user and Return the minimum number.

#include<stdio.h>
#include<stdlib.h>

int Difference(int Brr[], int iLen)
{
	int iCnt = 0,iMin = Brr[iCnt],iMax = Brr[iCnt], iDiff = 0;
	
	for(iCnt = 0; iCnt < iLen; iCnt++)
	{
		if(iMin > Brr[iCnt])
		{
			iMin = Brr[iCnt];
		}
		if(iMax < Brr[iCnt])
		{
			iMax = Brr[iCnt];
		}
		
		iDiff = iMax - iMin;
	}
	
	return iDiff;
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
	
	iRet = Difference(Arr, iSize);
	printf("Difference  is :%d\n",iRet);
	
	free(Arr);
	
	return 0;
	
}