#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

struct Employee emp[MAX];
int count = 0;

void addEmployee()
{
    if (count >= MAX)
    {
        printf("Storage full!\n");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp[count].id);

    // check duplicate ID
    for (int i = 0; i < count; i++)
    {
        if (emp[i].id == emp[count].id)
        {
            printf("Employee already exists!\n");
            return;
        }
    }

    printf("Enter Name: ");
    scanf(" %[^\n]", emp[count].name);

    printf("Enter Department: ");
    scanf(" %[^\n]", emp[count].department);

    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);

    count++;
    printf("Employee added successfully!\n");
}

void displayEmployees()
{
    if (count == 0)
    {
        printf("No records found.\n");
        return;
    }

    printf("\n--- Employee Records ---\n");

    for (int i = 0; i < count; i++)
    {
        printf("ID         : %d\n", emp[i].id);
        printf("Name       : %s\n", emp[i].name);
        printf("Department : %s\n", emp[i].department);
        printf("Salary     : %.2f\n", emp[i].salary);
        printf("------------------------\n");
    }
}

void searchEmployee()
{
    int id;
    printf("Enter Employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (emp[i].id == id)
        {
            printf("\nEmployee Found:\n");
            printf("ID         : %d\n", emp[i].id);
            printf("Name       : %s\n", emp[i].name);
            printf("Department : %s\n", emp[i].department);
            printf("Salary     : %.2f\n", emp[i].salary);
            return;
        }
    }

    printf("Employee not found!\n");
}

void updateEmployee()
{
    int id;
    printf("Enter Employee ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (emp[i].id == id)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", emp[i].name);

            printf("Enter New Department: ");
            scanf(" %[^\n]", emp[i].department);

            printf("Enter New Salary: ");
            scanf("%f", &emp[i].salary);

            printf("Employee updated successfully!\n");
            return;
        }
    }

    printf("Employee not found!\n");
}

void deleteEmployee()
{
    int id;
    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (emp[i].id == id)
        {
            for (int j = i; j < count - 1; j++)
            {
                emp[j] = emp[j + 1];
            }
            count--;
            printf("Employee deleted successfully!\n");
            return;
        }
    }

    printf("Employee not found!\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addEmployee();
            break;
        case 2:
            displayEmployees();
            break;
        case 3:
            searchEmployee();
            break;
        case 4:
            updateEmployee();
            break;
        case 5:
            deleteEmployee();
            break;
        case 6:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
}