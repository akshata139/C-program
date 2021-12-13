
//Accept N no of user and Calculate addition of odd numbers.

#include<stdio.h>
#include<stdlib.h>

int Count(int *Brr, int iLen)
{
	int iCnt = 0,iSum = 0;
	
	for(iCnt = 0; iCnt < iLen; iCnt++)
	{
		if(*Brr > 10)
		{
			iCnt++;
		}
		
		Brr++;
	}
	
	return iCnt;
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
	
	iRet = Count(Arr, iSize);
	printf("Count is :%d\n",iRet);
	
	free(Arr);
	
	return 0;
	
}