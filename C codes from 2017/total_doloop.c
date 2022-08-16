#include <stdio.h>
int main()
{
	int count = 0;
	int total = 0;
	
	do
		{
			total+= count;
			printf ("\nCount = %d\tTotal = %d", count++, total);
		}
	while (count < 10);
}