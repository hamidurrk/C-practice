#include <stdio.h>
#include <math.h>
int i, j, n, start_range, end_range, result, count;
int main() {
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        start_range = pow(10, (i-1));
        end_range = pow(10,i) - 1;
        if (start_range == 1)
            start_range = 0;
        else
            start_range = start_range;
        printf("%d - %d: ", start_range, end_range);
        for (j = start_range; j <= end_range; j++)
        {
            result = isPalindrome(j);
            if (result == 1)
                count++;
            else
                result = 0;
        }
        printf("%d \n", count);
    }
    return 0;
}

int isPalindrome(int k) {
    int reversed = 0, remainder, original, result;
    
    original = k;
    while (k != 0) {
        remainder = k % 10;
        reversed = reversed * 10 + remainder;
        k /= 10;
    }
    if (original == reversed)
        result = 1;
    else
        result = 0;
    
    return result;
}