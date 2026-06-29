#include <stdio.h>
#include <string.h>

struct StringRecord
{
    char text[100];
};

int main()
{
    struct StringRecord s[100];
    int count = 0;
    int choice, i;
    char search[100];
    int found;

    do
    {
        printf("\n===== STRING MANAGEMENT SYSTEM =====\n");
        printf("1. Add String\n");
        printf("2. View All Strings\n");
        printf("3. Search String\n");
        printf("4. Update String\n");
        printf("5. Delete String\n");
        printf("6. Reverse a String\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter string: ");
            scanf("%s", s[count].text);
            count++;
            printf("String added successfully!\n");
            break;

        case 2:
            if (count == 0)
            {
                printf("No strings available!\n");
            }
            else
            {
                printf("\n----- ALL STRINGS -----\n");
                for (i = 0; i < count; i++)
                {
                    printf("%d. %s\n", i + 1, s[i].text);
                }
            }
            break;

        case 3:
            printf("Enter string to search: ");
            scanf("%s", search);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (strcmp(s[i].text, search) == 0)
                {
                    printf("String found at position %d\n", i + 1);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("String not found!\n");
            break;

        case 4:
            printf("Enter string to update: ");
            scanf("%s", search);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (strcmp(s[i].text, search) == 0)
                {
                    printf("Enter new string: ");
                    scanf("%s", s[i].text);
                    printf("String updated successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("String not found!\n");
            break;

        case 5:
            printf("Enter string to delete: ");
            scanf("%s", search);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (strcmp(s[i].text, search) == 0)
                {

                    for (int j = i; j < count - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }

                    count--;
                    printf("String deleted successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("String not found!\n");
            break;

        case 6:
            printf("Enter string to reverse: ");
            scanf("%s", search);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (strcmp(s[i].text, search) == 0)
                {

                    printf("Reversed string: ");
                    for (int j = strlen(s[i].text) - 1; j >= 0; j--)
                    {
                        printf("%c", s[i].text[j]);
                    }
                    printf("\n");

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("String not found!\n");
            break;

        case 7:
            printf("Exiting system...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 7);

    return 0;
}