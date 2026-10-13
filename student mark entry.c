#include <stdio.h>

int main()
{
    float marks[10];
    float sum = 0, average, bonus = 1.5;
    int i, count = 0;

    for (i = 0; i < 10; i++)
    {
        do
        {
            printf("Enter marks for student %d: ", i + 1);

            if (scanf("%f", &marks[i]) != 1)
            {
                printf("Invalid input! Enter a number.\n");
                while (getchar() != '\n');
                marks[i] = -1;
            }
            else if (marks[i] < 0 || marks[i] > 20)
            {
                printf("Invalid marks! Enter marks between 0 and 20.\n");
            }

        } while (marks[i] < 0 || marks[i] > 20);
    }

    printf("\nOriginal Student Report:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Student %d: %.2f - ", i + 1, marks[i]);

        if (marks[i] >= 18)
            printf("Excellent\n");
        else if (marks[i] >= 14)
            printf("Good\n");
        else if (marks[i] >= 10)
            printf("Average\n");
        else
            printf("Needs Improvement\n");

        sum += marks[i];
    }

    average = sum / 10;

    for (i = 0; i < 10; i++)
    {
        if (marks[i] > average)
            count++;
    }

    printf("\nClass Average: %.2f\n", average);
    printf("Students Above Average: %d\n", count);

    for (i = 0; i < 10; i++)
    {
        marks[i] += bonus;

        if (marks[i] > 20)
            marks[i] = 20;
    }

    printf("\nRevised Student Report After Bonus:\n");

    sum = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Student %d: %.2f - ", i + 1, marks[i]);

        if (marks[i] >= 18)
            printf("Excellent\n");
        else if (marks[i] >= 14)
            printf("Good\n");
        else if (marks[i] >= 10)
            printf("Average\n");
        else
            printf("Needs Improvement\n");

        sum += marks[i];
    }

    average = sum / 10;
    count = 0;

    for (i = 0; i < 10; i++)
    {
        if (marks[i] > average)
            count++;
    }

    printf("\nRevised Class Average: %.2f\n", average);
    printf("Revised Students Above Average: %d\n", count);

    return 0;
}
