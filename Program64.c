/////////////////////////////////////////////////////////////////////
//
//Accept 5 numbers from user using array and perform addition.
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
	int Arr[5];
	int iSum = 0, i;
	
	printf("Enter numbers.\n");
	
	/*
	scanf("%d",&Arr[0]);
	scanf("%d",&Arr[1]);
	scanf("%d",&Arr[2]);
	scanf("%d",&Arr[3]);
	scanf("%d",&Arr[4]);
	*/
	for(i = 0; i < 5; i++)
	{
		scanf("%d",&Arr[i]);
	}
	
	iSum = iSum +Arr[0];
	iSum = iSum +Arr[1];
	iSum = iSum +Arr[2];
	iSum = iSum +Arr[3];
	iSum = iSum +Arr[4];
	
	printf("Addition is:%d\n",iSum);
	
	return 0;
}