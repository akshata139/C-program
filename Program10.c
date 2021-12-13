

#include<stdio.h>

void Display(int);       //Declaration

int main()
{
	int iNo = 0;
	 
	printf("Enter a Number.\n");
	scanf("%d",&iNo);
	
	printf("Output is :\n");
	Display(iNo);        //Function Call
	
	return 0;
}

void Display(int iValue)         //Defination int-signed integer
{
	int i = 0;
	
	if(iValue==0)
	{
		printf("You have entered zero value.");
		return;
	}
	if(iValue<0)
	{
		iValue = -iValue;
	}
	
	for(i = iValue; i >= 1; i--)
	{
		printf("%d\n",i);  
	}
}
