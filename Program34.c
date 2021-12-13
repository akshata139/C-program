#include<stdio.h>

void DisplayTable(int);

int main()
{
	int iValue = 0;
	
	printf("Enter value.\n");
	scanf("%d",&iValue);
	
	DisplayTable(iValue);
	
	return 0;
}

void DisplayTable(int iNo)
{
	int iCnt = 0;
	int iTable = 0;
	
	if(iNo == 0)
	{
		return;
	}
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(int iCnt = 1;iCnt <= 10; iCnt++)
	{
		iTable = iCnt * iNo;
		printf("%d\n",iTable);             //printf("%d\n",iCnt*iNo);
	}
}