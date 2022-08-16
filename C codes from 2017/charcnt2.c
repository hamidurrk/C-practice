#include <stdio.h>
#include <conio.h>

void main (void)
{
	int count = -1;
	char ch = 'a';
	
	printf ("Enter a phrase : \n");
	while (ch != '0')
		{
		ch= getche();
		count ++;
		}
	printf("\nCharacter count is: %d", count);
}