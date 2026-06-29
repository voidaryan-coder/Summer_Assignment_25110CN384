#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int available; // 1 = available, 0 = issued
};

int main()
{
    struct Book b[100];
    int count = 0;
    int choice, i, found, id;

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. View All Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &b[count].id);

            printf("Enter Title: ");
            scanf("%s", b[count].title);

            printf("Enter Author: ");
            scanf("%s", b[count].author);

            b[count].available = 1;

            count++;
            printf("Book added successfully!\n");
            break;

        case 2:
            if (count == 0)
            {
                printf("No books available!\n");
            }
            else
            {
                printf("\n----- BOOK LIST -----\n");
                for (i = 0; i < count; i++)
                {
                    printf("\nBook %d\n", i + 1);
                    printf("ID        : %d\n", b[i].id);
                    printf("Title     : %s\n", b[i].title);
                    printf("Author    : %s\n", b[i].author);
                    printf("Status    : %s\n", b[i].available ? "Available" : "Issued");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (b[i].id == id)
                {
                    printf("\nBook Found!\n");
                    printf("Title  : %s\n", b[i].title);
                    printf("Author : %s\n", b[i].author);
                    printf("Status : %s\n", b[i].available ? "Available" : "Issued");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found!\n");
            break;

        case 4:
            printf("Enter Book ID to issue: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (b[i].id == id)
                {
                    if (b[i].available == 1)
                    {
                        b[i].available = 0;
                        printf("Book issued successfully!\n");
                    }
                    else
                    {
                        printf("Book already issued!\n");
                    }
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found!\n");
            break;

        case 5:
            printf("Enter Book ID to return: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (b[i].id == id)
                {
                    if (b[i].available == 0)
                    {
                        b[i].available = 1;
                        printf("Book returned successfully!\n");
                    }
                    else
                    {
                        printf("Book was not issued!\n");
                    }
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found!\n");
            break;

        case 6:
            printf("Enter Book ID to delete: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (b[i].id == id)
                {

                    for (int j = i; j < count - 1; j++)
                    {
                        b[j] = b[j + 1];
                    }

                    count--;
                    printf("Book deleted successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found!\n");
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