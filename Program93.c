#include<stdio.h>

void Display(char *Brr)
{
	
	while(*Brr != '\0')
	{
		printf("%c\n",*Brr);
		Brr++;
	}
	
	
}

int main()
{										// 0    1   2   3   4   5
	char Arr[50];          				//[ H | e | l | l | o | '0']
                                        //  5   6   7    8  9    10     - address
	printf("Enter your name.\n");
	scanf("%[^'\n']s",Arr);      //50
	
	Display(Arr); //Display(5)
	
	return 0;
}