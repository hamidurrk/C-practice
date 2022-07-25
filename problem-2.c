#include<stdio.h>
int main() {
    int n, i = 1;
    float sum = 0.0, avg;

    while (1){
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n == -999) {
            printf("End!");
            break;
        }
        else {
            while(1) {
                sum = sum + n;
                avg = sum / i;
                printf("Average = %.2f\n\n", avg);
                i++;
                break;
            }
        }
    }
    return 0;
}