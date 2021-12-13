#include<stdio.h>

int main()
{
	char Arr[11] = "Akshata";
	
	printf("%s\n",&Arr[0]);				//%s string format specifier - Request for address
	printf("%s\n",&Arr[2]);
	printf("%s\n",&Arr[4]);
	printf("%s\n",Arr);
	printf("%s\n",Arr+3);
	printf("%s\n",Arr+5);
	
	return 0;
}