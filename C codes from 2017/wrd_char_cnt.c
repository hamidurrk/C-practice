#include <stdio.h>
#include <conio.h>

void main (void)
{
	char ch='a';
	int charcnt=-1;
	int wordcnt = 1;
	
	printf ("\nEnter any phrase: ");
	
	while (ch != '.')
	{
	ch=getche();
	charcnt++;
	if ( ch == ' ')
		wordcnt++;
	}
	printf("\nCharacter count is\t%d",charcnt);
	printf("\nWord count is\t%d", wordcnt);
}