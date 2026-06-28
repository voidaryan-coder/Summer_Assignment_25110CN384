#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, ta, pf, gross, net;
};

struct Employee emp[MAX];
int count = 0;

// Calculate Salary
void calculate(int i)
{
    emp[i].hra = emp[i].basic * 0.20;
    emp[i].da = emp[i].basic * 0.10;
    emp[i].ta = emp[i].basic * 0.05;
    emp[i].pf = emp[i].basic * 0.08;

    emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da + emp[i].ta;
    emp[i].net = emp[i].gross - emp[i].pf;
}

// Add Employee
void addEmployee()
{
    if (count == MAX)
    {
        printf("\nEmployee list is full!\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[count].name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp[count].basic);

    calculate(count);
    count++;

    printf("\nEmployee Added Successfully!\n");
}

// Display All Employees
void displayEmployees()
{
    int i;

    if (count == 0)
    {
        printf("\nNo Employee Records Found!\n");
        return;
    }

    printf("\n=========== EMPLOYEE LIST ===========\n");

    for (i = 0; i < count; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("----------------------------------\n");
        printf("ID           : %d\n", emp[i].id);
        printf("Name         : %s\n", emp[i].name);
        printf("Basic Salary : %.2f\n", emp[i].basic);
        printf("Gross Salary : %.2f\n", emp[i].gross);
        printf("Net Salary   : %.2f\n", emp[i].net);
    }
}

// Search Employee
void searchEmployee()
{
    int id, i;

    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (emp[i].id == id)
        {
            printf("\nEmployee Found!\n");
            printf("ID           : %d\n", emp[i].id);
            printf("Name         : %s\n", emp[i].name);
            printf("Basic Salary : %.2f\n", emp[i].basic);
            printf("Gross Salary : %.2f\n", emp[i].gross);
            printf("Net Salary   : %.2f\n", emp[i].net);
            return;
        }
    }

    printf("\nEmployee Not Found!\n");
}

// Update Employee
void updateEmployee()
{
    int id, i;

    printf("\nEnter Employee ID to Update: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (emp[i].id == id)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", emp[i].name);

            printf("Enter New Basic Salary: ");
            scanf("%f", &emp[i].basic);

            calculate(i);

            printf("\nEmployee Updated Successfully!\n");
            return;
        }
    }

    printf("\nEmployee Not Found!\n");
}

// Delete Employee
void deleteEmployee()
{
    int id, i, j;

    printf("\nEnter Employee ID to Delete: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (emp[i].id == id)
        {
            for (j = i; j < count - 1; j++)
            {
                emp[j] = emp[j + 1];
            }

            count--;
            printf("\nEmployee Deleted Successfully!\n");
            return;
        }
    }

    printf("\nEmployee Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n====================================");
        printf("\n     SALARY MANAGEMENT SYSTEM");
        printf("\n====================================");
        printf("\n1. Add Employee");
        printf("\n2. Display All Employees");
        printf("\n3. Search Employee");
        printf("\n4. Update Employee");
        printf("\n5. Delete Employee");
        printf("\n6. Exit");
        printf("\nEnter Your Choice: ");
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
            printf("\nThank You!\n");
            break;
        default:
            printf("\nInvalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}