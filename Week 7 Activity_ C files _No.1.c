
#include <stdio.h>
#include <stdlib.h>

// Function prototype
void writeToFile(void);

int main()
{
    writeToFile();

    return 0;
}

// Function definition
void writeToFile(void)
{
    FILE *fp;
    char book_titles[200];

    fp = fopen("borrowed_books.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening the file!\n");
        exit(1);
    }

    printf("Enter the book titles:\n");

    fgets(book_titles, sizeof(book_titles), stdin);

    fputs(book_titles, fp);

    printf("Successfully written to file!\n");

    fclose(fp);
}
    