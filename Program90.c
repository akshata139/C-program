#include<stdio.h>

void Display(char Brr[])
{
	printf("Your entered name is :\t %s",Brr);
}

int main()
{
	char Arr[50] ;
	
	printf("Enter your name.\n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	
	return 0;
}