#include<stdio.h>

int main()
{
	int a = 10;
	int *iptr = &a;
	
	printf("%d\n",*iptr);
	printf("%p\n",*iptr);
	printf("%d\n",a);
	
	*iptr = *iptr + 1;
	printf("%d",iptr);
}