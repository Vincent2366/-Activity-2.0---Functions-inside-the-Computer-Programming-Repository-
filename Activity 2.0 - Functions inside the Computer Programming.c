#include <stdio.h>

int thisisgrades(int grade1, int grade2, int grade3, int grade4, int grade5);
float thisisaverage(int sum);

int main()
{
    int grade1, grade2, grade3, grade4, grade5;
    int sum;
    float average;

    printf("Input 5 grades: ");
    scanf("%d %d %d %d %d", &grade1, &grade2, &grade3, &grade4, &grade5);


    sum = thisisgrades(grade1, grade2, grade3, grade4, grade5);
    average = thisisaverage(sum);

    printf("Sum of grades: %d\n", sum);
    printf("Average of grades: %.2f\n", average);

    return 0;
}

int thisisgrades(int grade1, int grade2, int grade3, int grade4, int grade5)
{
    int sum = grade1 + grade2 + grade3 + grade4 + grade5;
    return sum;
}

float thisisaverage(int sum)
{
    float average = (float)sum / 5;
    return average;
}