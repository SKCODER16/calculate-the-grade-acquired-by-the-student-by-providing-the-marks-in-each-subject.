
#include <stdio.h>

int main() {
    int n, i;
    float marks, total = 0, percentage;

    // Input number of subjects
    printf("Enter number of subjects: ");
    scanf("%d", &n);

    // Input marks for each subject
    for (i = 1; i <= n; i++) {
        printf("Enter marks for subject %d (out of 100): ", i);
        scanf("%f", &marks);
        total += marks;
    }

    // Calculate percentage
    percentage = total / n;

    // Display results
    printf("\nTotal Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    // Assign grade
    if (percentage >= 90)
        printf("Grade: A+\n");
    else if (percentage >= 80)
        printf("Grade: A\n");
    else if (percentage >= 70)
        printf("Grade: B\n");
    else if (percentage >= 60)
        printf("Grade: C\n");
    else if (percentage >= 50)
        printf("Grade: D\n");
    else
        printf("Grade: F (Fail)\n");

    return 0;
}


