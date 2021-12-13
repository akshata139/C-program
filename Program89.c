#include<stdio.h>

int main()
{
	char Arr[50] ;
	
	printf("Enter your name.\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Your entered name is :\t %s",Arr);
	
	return 0;
}