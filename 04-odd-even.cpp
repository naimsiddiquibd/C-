#include<stdio.h>

int main() {
    int number;
    printf("Enter the year you would like to check: ");
    scanf("%d", &number);
    if (number % 2 == 0){
        printf("%d is a even number!\n", number);
    }
    else{
        printf("%d is a odd number!\n", number);
    }
    return 0;
}