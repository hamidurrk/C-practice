#include <stdio.h>
int main()
{
	int num=1;
	long ans;
	while (num != 0)
	{
		printf ("\nEnter a number: ");
		scanf ("%d", &num);
		ans = 1;
		while (num>1)
		ans = ans * num--;
		printf ("Factorial is %d\n", ans);
		
	}
}