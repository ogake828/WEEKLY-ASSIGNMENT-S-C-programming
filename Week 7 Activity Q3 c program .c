
#include <stdio.h>
#include <stdlib.h>

// Function prototype
void writeFromFile(void);

int main()
{
    writeFromFile();

    return 0;
}

// Function definition
void writeFromFile(void)
{
    FILE *fp;

    float sales;
    float calculateTotal_sales;

    fp = fopen("Sales.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening the file\n");
        exit(1);
    }

    printf("Enter the sales: ");
    scanf("%f", &sales);

    printf("Enter the total sales: ");
    scanf("%f", &calculateTotal_sales);

    fprintf(fp, "%.2f\n", sales);
    fprintf(fp, "%.2f\n", calculateTotal_sales);

    printf("Successfully written to file\n");

    fclose(fp);
}
