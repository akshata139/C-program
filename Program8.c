

#include<stdio.h>

void Display(int);       //Declaration

int main()
{
	int iNo = 0;
	 
	printf("Enter a Number.\n");
	scanf("%d",&iNo);
	
	Display(iNo);        //Function Call
	
	return 0;
}

void Display(int iValue)         //Defination
{
	int i = 0;
	
	for(i = 1; i <= iValue; i++)
	{
		printf("Hello Akshata !!\n");
	}
}
