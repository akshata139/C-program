#include<stdio.h>

void Display(int, int);

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter Number of Rows.\n");
	scanf("%d",&iValue1);
	
	printf("Enter number of Columns.\n");
	scanf("%d",&iValue2);
	
	Display(iValue1, iValue2);
	
	return 0;
}

void Display(int iRow, int iCol)
{
	int iCnt1 = 0, iCnt2 = 0;
	
	if(iRow == 0)
	{
		printf("Invalid input.\n");
	}
	
	if(iRow < 0)
	{
		iRow = -iRow;
	}
	
	if(iCol == 0)
	{
		printf("Invalid input.\n");
	}
	
	if(iCol	< 0)
	{
		iCol = -iCol;
	}
	
	for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
	{
		
		for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
		{
			if(iCnt1 == iCnt2)
			{
				printf("$\t");
			}
			
			else if(iCnt1 > iCnt2)
			{
				printf("*\t");
			}
			
			else
			{
				printf("#\t");
			}
		}
		
		printf("\n");
	}
	
}
//Array
//Pointer - void star
//Dynamic memory allocation
//malloc
//free
//void
