#include <stdio.h>

int main() {
    float cgpa;

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    if (cgpa > 4.00 || cgpa < 0.00) {
        printf("Invalid CGPA\n");
    } else if (cgpa == 4.00) {
        printf("A+\n");
    } else if (cgpa >= 3.75) {
        printf("A\n");
    } else if (cgpa >= 3.50) {
        printf("A-\n");
    } else if (cgpa >= 3.25) {
        printf("B+\n");
    } else if (cgpa >= 3.00) {
        printf("B\n");
    } else if (cgpa >= 2.75) {
        printf("B-\n");
    } else if (cgpa >= 2.50) {
        printf("C+\n");
    } else if (cgpa >= 2.25) {
        printf("C\n");
    } else if (cgpa >= 2.00) {
        printf("D\n");
    } else {
        printf("F\n");
    }

    return 0;
}
