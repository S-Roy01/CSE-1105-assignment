#include <stdio.h>

int main() {
    int choice;
    float cm, inch;

    printf("Choose conversion:\n");
    printf("1. Centimeters to Inches\n");
    printf("2. Inches to Centimeters\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter centimeters: ");
        scanf("%f", &cm);
        inch = cm / 2.54;
        printf("%.2f cm = %.2f inches\n", cm, inch);
    } else if (choice == 2) {
        printf("Enter inches: ");
        scanf("%f", &inch);
        cm = inch * 2.54;
        printf("%.2f inches = %.2f cm\n", inch, cm);
    } else {
        printf("Wrong choice.\n");
    }

    return 0;
}
