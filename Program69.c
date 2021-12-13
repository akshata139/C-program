/////////////////////////////////////////////////////////////////////
//
//Accept N numbers from user using array and perform addition.
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Addition(int *Brr, int iSize)
{
	int iCnt = 0, iSum = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		iSum = iSum + (*Brr);		//*Brr = 100
		Brr++;
	}
	
	return iSum;
}

int main()
{
	int *Arr = NULL; //macro
	int iRet = 0, iCnt = 0, iLength = 0;
	
	printf("Enter number of elements.\n");
	scanf("%d",&iLength);
	
	Arr = (int*) malloc ( sizeof(int) * iLength);
	
	printf("Enter numbers.\n");
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	iRet = Addition(Arr,iLength);				//Addition(200);
	printf("Addition is:%d\n",iRet);
	
	free(Arr);
	
	return 0;
}