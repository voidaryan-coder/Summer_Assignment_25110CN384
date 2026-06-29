#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact contacts[100];
    int count = 0, choice, i, found;
    char searchName[50];

    do
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            if (count == 100)
            {
                printf("Contact list is full!\n");
                break;
            }

            printf("Enter Name: ");
            scanf("%s", contacts[count].name);

            printf("Enter Phone Number: ");
            scanf("%s", contacts[count].phone);

            printf("Enter Email: ");
            scanf("%s", contacts[count].email);

            count++;
            printf("Contact Added Successfully!\n");
            break;

        case 2:
            if (count == 0)
            {
                printf("No contacts found!\n");
            }
            else
            {
                printf("\n----- Contact List -----\n");
                for (i = 0; i < count; i++)
                {
                    printf("\nContact %d\n", i + 1);
                    printf("Name  : %s\n", contacts[i].name);
                    printf("Phone : %s\n", contacts[i].phone);
                    printf("Email : %s\n", contacts[i].email);
                }
            }
            break;

        case 3:
            printf("Enter Name to Search: ");
            scanf("%s", searchName);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (strcmp(contacts[i].name, searchName) == 0)
                {
                    printf("\nContact Found!\n");
                    printf("Name  : %s\n", contacts[i].name);
                    printf("Phone : %s\n", contacts[i].phone);
                    printf("Email : %s\n", contacts[i].email);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact not found!\n");

            break;

        case 4:
            printf("Enter Name to Update: ");
            scanf("%s", searchName);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (strcmp(contacts[i].name, searchName) == 0)
                {
                    printf("Enter New Name: ");
                    scanf("%s", contacts[i].name);

                    printf("Enter New Phone: ");
                    scanf("%s", contacts[i].phone);

                    printf("Enter New Email: ");
                    scanf("%s", contacts[i].email);

                    printf("Contact Updated Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact not found!\n");

            break;

        case 5:
            printf("Enter Name to Delete: ");
            scanf("%s", searchName);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (strcmp(contacts[i].name, searchName) == 0)
                {

                    int j;
                    for (j = i; j < count - 1; j++)
                    {
                        contacts[j] = contacts[j + 1];
                    }

                    count--;
                    printf("Contact Deleted Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact not found!\n");

            break;

        case 6:
            printf("Thank you!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}