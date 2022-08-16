#include <stdio.h>
#include <conio.h>

void main (void)
{
	char ch;
	
	while (ch != '0')
	{
	printf ("\n\nEnter a character :  ");
	ch = getche();
	printf ("\nThe ASCII code for %c is %d", ch, ch);
	}
}