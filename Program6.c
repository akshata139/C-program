//Display 5 times # on Screen.

#include<stdio.h>

void Display();       //Declaration

int main()
{
	Display();        //Function Call
	
	return 0;
}

void Display()         //Defination
{
	int i = 0;
	
	for(i = 1; i <= 8; i++)
	{
		printf("#\n");
	}
}
