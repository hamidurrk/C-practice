#include<stdio.h>
#include<string.h>

int count = 0, in;
char str[100] = {0};
    
int main() {
    printf("Enter your String:");
    gets(str);
    
    for(in=0;in<strlen(str);in++) {
        if(str[in] >= '0' && str[in] <= '9') {
            count++;
        }
    }
    if(count==strlen(str))
        printf("String contains only digits. %d", count);
    else
        printf("String does not contains only digits.%d", count);
}