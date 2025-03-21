#include <stdio.h>
#include <math.h> 
int main() {
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    double square = number * number; 
    double squareRoot = sqrt(number);
    if (number >= 0) {
        printf("Square of %.2lf is %.2lf\n", number, square);
        printf("Square root of %.2lf is %.2lf\n", number, squareRoot);
    } else {
        printf("Square of %.2lf is %.2lf\n", number, square);
        printf("Square root of %.2lf is undefined for negative numbers.\n", number);
    }
    return 0;
}
