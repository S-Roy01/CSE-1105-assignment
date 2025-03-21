#include <stdio.h>

int main() {
    int num;

    printf("Enter a positive integer number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not prime.\n", num);
    } else if (num <= 3) { 
        printf("%d is prime.\n", num);
    } else if (num % 2 == 0 || num % 3 == 0) { 
        printf("%d is not prime.\n", num);
    } else {
        int isPrime = 1; 
        for (int i = 5; i * i <= num; i += 6) { 
            if (num % i == 0 || num % (i + 2) == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d is prime.\n", num);
        } else {
            printf("%d is not prime.\n", num);
        }
    }
    return 0;
}
