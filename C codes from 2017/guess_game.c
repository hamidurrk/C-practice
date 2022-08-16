#include<stdio.h>
#include <conio.h>

void main (void)
{
	int a;
	char ch;
	for (a=4;a<5;a++)
		{
			printf ("\nGuess a letter from 'a' to 'e'. \nType it here : ");
			
			while ( (ch=getche()) != 'd')
				{
					printf ("\n\nSorry %c is incorrect. Try again\n.", ch);
				}
			printf ("\nGood!");
		}
	printf (" \nOut of luck! \n");
}
						