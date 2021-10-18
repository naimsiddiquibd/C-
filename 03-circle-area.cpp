#include<stdio.h>
#include<math.h>

int main() {
    double r, area, pi;
    printf("Enter the radius of your circle: ");
    scanf("%lf", &r);
    pi = acos(-1.);
    area = pi * r * r;
    printf("The area of your circle is: %lf\n", area);
    return 0;
}