
#include <stdio.h>
#include <stdlib.h>
//students_name
//registration_number
//Total_marks

// Function prototype
void appendToFile(void);

int main()
{
    appendToFile();

    return 0;
}

// Function definition
void appendToFile(void)
{
    FILE *fp;

    char students_name[50];
    int registration_number;
    int total_marks;

    // Open file for appending
    fp = fopen("results.data.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening the file\n");
        exit(1);
    }

    // Enter student details
    printf("Enter student's name:\n");
    fgets(students_name, sizeof(students_name), stdin);

    printf("Enter registration number:\n");
    scanf("%d", &registration_number);

    printf("Enter total marks:\n");
    scanf("%d", &total_marks);

    // Save information into the file
    fprintf(fp, "%s", students_name);
    fprintf(fp, "%d\n", registration_number);
    fprintf(fp, "%d\n", total_marks);

    printf("\nSuccessfully saved to file!\n");

    // Close file
    fclose(fp);
}
