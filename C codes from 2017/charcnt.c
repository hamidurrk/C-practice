#include <stdio.h>
#include <conio.h>

void main (void)
{
	int count=0;
	printf ("\nEnter a phrase:\n");
	while (getche() != '0')
		count ++;
	
	printf ("\nCharacter count is %d", count);
	return 0;
}