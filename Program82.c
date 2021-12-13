
//Accept N no of user and Return the largest number.
//time complexity : best case 1 ,   Worst case : n

#include<stdio.h>
#include<stdlib.h>

int FirstOccurence(int *Brr , int iLen,int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iLen; iCnt++)
	{
		if(*Brr == iNo)
		{
			break;
		}
		
		Brr++;
	}
	if(iCnt == iLen)
	{
		return -1;  //if element is not found then it goes out of the array index and it become iCnt = iSize.
	}
	else                                           //i < iSize
	{
		return iCnt; // and if the element is found then it would be at less than iLen positon.
	}

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
	
	iRet =FirstOccurence(Arr, iSize,iValue);
	
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