#include <stdio.h>
#include <conio.h>

void main (void)
{
	printf ("Type 'no' : ");
	while (getche()!= 'n')
	{	printf ("\nYou are wrong\n"); }
	if (getche()== 'o')
	printf ("\nYou've typed 'no'!");
}