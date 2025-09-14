#include <stdio.h>

int main() {
    int s1, s2, s3, s4, s5;
    int total;
    float percentage;

    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    percentage = total / 5.0;

    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f", percentage);

    if (percentage >= 60)
        printf("\nDivision = First");
    else if (percentage >= 45)
        printf("\nDivision = Second");
    else if (percentage >= 33)
        printf("\nDivision = Third");
    else
        printf("\nFail");

    return 0;

