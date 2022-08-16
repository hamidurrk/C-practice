#include <stdio.h>
#include <conio.h>
int main () 
{
	char ch;
	do
	{
		printf ("\n\nGuess a digit from 'a' to 'e' : \n");
		while ( (ch=getche()) != 'c')
		{
			printf ("\nSorry, %c is incorrect!", ch);
			printf ("\nTry again!\n");
		}
		printf ("\nThats it!");
		printf ("\nPlay again?(Type 'y' or 'n')");
	}
	while (getche() == 'y');
	printf ("\nThanks for playing!");
}