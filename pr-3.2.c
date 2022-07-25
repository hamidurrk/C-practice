#include<stdio.h>
#include<string.h>

int count=0, i, j, n, temp, p, q, med;
float medf;
char str[100]={0}, digit[100];
    
int main() {
    printf("Enter your String:");
    gets(str);                              //string input
    
    for(i = 0; i < strlen(str); i++) {      //string to int conversion
        digit[i] = str[i]-'0';
    }
    
    n = strlen(str);
    for (i = 0; i < n-1; i++){              //sorting
      for (j = i+1; j < n; j++){
         if (digit[i] > digit[j]){
            temp = digit[i];
            digit[i] = digit[j];
            digit[j] = temp;
         }
      }
   }
   printf("Sorted in ascending order: ");
    for (i=0; i<n; i++) {                     //sorted digit print
        printf("%d", digit[i]);
   }
   if(n % 2 == 0) {
        printf("\nNumber length = %d, is even.\n", n);
        p = (n/2) - 1;
        q = (n/2);
        medf = (digit[p] + digit[q]) / 2.0;
        printf("Median = %f \n", medf);
   }
    else {
        printf("\nNumber length = %d, is odd.\n", n);
        med = (n+1) / 2 - 1;      
        printf("Median = %d \n", digit[med]);
    }
}

