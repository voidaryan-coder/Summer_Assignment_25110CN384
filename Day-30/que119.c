#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int count = 0;
    int choice, i, found, id;

    do
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. View All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &e[count].id);

            printf("Enter Name: ");
            scanf("%s", e[count].name);

            printf("Enter Department: ");
            scanf("%s", e[count].department);

            printf("Enter Salary: ");
            scanf("%f", &e[count].salary);

            count++;
            printf("Employee added successfully!\n");
            break;

        case 2:
            if (count == 0)
            {
                printf("No employee records found!\n");
            }
            else
            {
                printf("\n----- EMPLOYEE LIST -----\n");
                for (i = 0; i < count; i++)
                {
                    printf("\nEmployee %d\n", i + 1);
                    printf("ID         : %d\n", e[i].id);
                    printf("Name       : %s\n", e[i].name);
                    printf("Department : %s\n", e[i].department);
                    printf("Salary     : %.2f\n", e[i].salary);
                }
            }
            break;

        case 3:
            printf("Enter Employee ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (e[i].id == id)
                {
                    printf("\nEmployee Found!\n");
                    printf("Name       : %s\n", e[i].name);
                    printf("Department : %s\n", e[i].department);
                    printf("Salary     : %.2f\n", e[i].salary);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee not found!\n");
            break;

        case 4:
            printf("Enter Employee ID to update: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (e[i].id == id)
                {

                    printf("Enter new name: ");
                    scanf("%s", e[i].name);

                    printf("Enter new department: ");
                    scanf("%s", e[i].department);

                    printf("Enter new salary: ");
                    scanf("%f", &e[i].salary);

                    printf("Employee updated successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee not found!\n");
            break;

        case 5:
            printf("Enter Employee ID to delete: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (e[i].id == id)
                {

                    for (int j = i; j < count - 1; j++)
                    {
                        e[j] = e[j + 1];
                    }

                    count--;
                    printf("Employee deleted successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee not found!\n");
            break;

        case 6:
            printf("Exiting system...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}