#include <stdio.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LENGTH 200

char lines[MAX_LINES][MAX_LENGTH];
int lineCount = 0;

void insertLine();
void deleteLine();

int main()
{
    int choice;

    printf("=== LINE EDITOR ===\n");

    while (1)
    {
        printf("\n1. Insert Line\n");
        printf("2. Delete Line\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            insertLine();
        }
        else if (choice == 2)
        {
            deleteLine();
        }
        else if (choice == 3)
        {
            printf("Exiting editor...\n");
            break;
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}

void insertLine()
{
    int lineNumber;
    char text[MAX_LENGTH];

    printf("Enter line number: ");
    scanf("%d", &lineNumber);
    getchar();

    printf("Enter text: ");
    fgets(text, MAX_LENGTH, stdin);

    text[strcspn(text, "\n")] = '\0';

    if (lineNumber < 1 || lineNumber > lineCount + 1)
    {
        printf("Invalid line number.\n");
        return;
    }

    if (lineCount >= MAX_LINES)
    {
        printf("Document is full.\n");
        return;
    }

    for (int i = lineCount; i >= lineNumber; i--)
    {
        strcpy(lines[i], lines[i - 1]);
    }

    strcpy(lines[lineNumber - 1], text);

    lineCount++;

    printf("Line inserted successfully.\n");
}

void deleteLine()
{
    int lineNumber;

    printf("Enter line number to delete: ");
    scanf("%d", &lineNumber);

    if (lineNumber < 1 || lineNumber > lineCount)
    {
        printf("Invalid line number.\n");
        return;
    }

    for (int i = lineNumber - 1; i < lineCount - 1; i++)
    {
        strcpy(lines[i], lines[i + 1]);
    }

    lineCount--;

    printf("Line deleted successfully.\n");
}