#include<stdio.h>

int main(){
    int year;
    printf("Enter a year you want to check: ");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)){
        printf("%d is  a Leap Year!\n", year);
    }
    else {
        printf("%d is not a Leap Year!\n", year);
    }

}