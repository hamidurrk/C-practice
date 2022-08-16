#include <stdio.h>
int hcf(int n1, int n2);

int n1, n2, a, b;
int main()
{
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2));
    return 0;
}

int hcf(int n1, int n2)
{
    if (n2 != 0)
    {
        printf("//////////////////////////////////////////////////////////////////////////////////\n");
        printf("1st number: %d\n2nd number: %d\n\n", n1, n2);
        b = n1 / n2;
        a = n1 % n2;
        printf("Division result: %d\nRemainder: %d\n\n\n\n", b, a);
        return hcf(n2, a);
    }
    else
    {
        printf("ELSE TRIGGER!!!\n1st number: %d\n2nd number: %d\n\n", n1, n2);
        return n1;
    }
}