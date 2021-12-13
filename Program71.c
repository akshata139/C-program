
//Accept N no of user and Calculate average of that numbers.

#include<stdio.h>
#include<stdlib.h>

float Average(int *Brr, int iLen)
{
	int iCnt = 0,iSum = 0;
	float fAvg = 0.0f;
	
	for(iCnt = 0; iCnt < iLen; iCnt++)
	{
		iSum = iSum + (*Brr);
		
		Brr++;
	}
	fAvg = (float)iSum / (float)iLen;       //Explicit type casting  :  
	
	return fAvg;
}

int main()
{
	int *Arr = NULL;
	int iCnt = 0, iSize = 0;
	float fRet = 0.0f;
	
	printf("Enter the number of elements.\n");
	scanf("%d",&iSize);
	
	Arr = (int*)malloc( sizeof(int) * iSize);
	
	if(Arr == NULL)
	{
		printf("Unable to allocate memory.\n");
		return -1;
	}
	
	printf("Enter the elements.\n");.
	
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
	
	fRet = Average(Arr, iSize);
	printf("Average is :%f\n",fRet);
	
	free(Arr);
	
	return 0;
	
}