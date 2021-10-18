#include<stdio.h>

int main(){
    int i;
    // Print from 1 to 10
    for (i =1; i <=10; i++){
        printf("%d\n", i);
    }
    // Print from 10 to 1
    for (i =10; i >=1; i--){
        printf("%d\n", i);
    }
    // Print odd number from 1 to 10
    for (i =1; i <= 10; i += 2){
        printf("%d\n", i);
    }
    return 0;
}