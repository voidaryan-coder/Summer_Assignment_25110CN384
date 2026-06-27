#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student
{
    int roll_no;
    char name[50];
    int age;
    char course[50];
};

struct Student students[MAX];
int count = 0;

void addStudent()
{
    if (count >= MAX)
    {
        printf("Storage full!\n");
        return;
    }

    printf("Enter Roll No: ");
    scanf("%d", &students[count].roll_no);

    // check duplicate
    for (int i = 0; i < count; i++)
    {
        if (students[i].roll_no == students[count].roll_no)
        {
            printf("Student already exists!\n");
            return;
        }
    }

    printf("Enter Name: ");
    scanf(" %[^\n]", students[count].name);

    printf("Enter Age: ");
    scanf("%d", &students[count].age);

    printf("Enter Course: ");
    scanf(" %[^\n]", students[count].course);

    count++;
    printf("Student added successfully!\n");
}

void displayStudents()
{
    if (count == 0)
    {
        printf("No records found.\n");
        return;
    }

    printf("\n--- Student Records ---\n");

    for (int i = 0; i < count; i++)
    {
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Name   : %s\n", students[i].name);
        printf("Age    : %d\n", students[i].age);
        printf("Course : %s\n", students[i].course);
        printf("-----------------------\n");
    }
}

void searchStudent()
{
    int roll;
    printf("Enter Roll No to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++)
    {
        if (students[i].roll_no == roll)
        {
            printf("Student Found:\n");
            printf("Roll No: %d\n", students[i].roll_no);
            printf("Name   : %s\n", students[i].name);
            printf("Age    : %d\n", students[i].age);
            printf("Course : %s\n", students[i].course);
            return;
        }
    }

    printf("Student not found!\n");
}

void updateStudent()
{
    int roll;
    printf("Enter Roll No to update: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++)
    {
        if (students[i].roll_no == roll)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", students[i].name);

            printf("Enter New Age: ");
            scanf("%d", &students[i].age);

            printf("Enter New Course: ");
            scanf(" %[^\n]", students[i].course);

            printf("Record updated successfully!\n");
            return;
        }
    }

    printf("Student not found!\n");
}

void deleteStudent()
{
    int roll;
    printf("Enter Roll No to delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++)
    {
        if (students[i].roll_no == roll)
        {
            for (int j = i; j < count - 1; j++)
            {
                students[j] = students[j + 1];
            }
            count--;
            printf("Student deleted successfully!\n");
            return;
        }
    }

    printf("Student not found!\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            updateStudent();
            break;
        case 5:
            deleteStudent();
            break;
        case 6:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}