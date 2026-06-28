#include <stdio.h>

#define MAX 100

struct Student
{
    int roll;
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;
};

struct Student s[MAX];
int count = 0;

// Calculate Result
void calculate(int i)
{
    s[i].total = s[i].m1 + s[i].m2 + s[i].m3 + s[i].m4 + s[i].m5;
    s[i].percentage = s[i].total / 5.0;

    if (s[i].percentage >= 90)
        s[i].grade = 'A';
    else if (s[i].percentage >= 75)
        s[i].grade = 'B';
    else if (s[i].percentage >= 60)
        s[i].grade = 'C';
    else if (s[i].percentage >= 40)
        s[i].grade = 'D';
    else
        s[i].grade = 'F';
}

// Add Student
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[count].roll);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", s[count].name);

    printf("Enter Marks of 5 Subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &s[count].m1);
    printf("Subject 2: ");
    scanf("%d", &s[count].m2);
    printf("Subject 3: ");
    scanf("%d", &s[count].m3);
    printf("Subject 4: ");
    scanf("%d", &s[count].m4);
    printf("Subject 5: ");
    scanf("%d", &s[count].m5);

    calculate(count);
    count++;

    printf("\nStudent Record Added Successfully!\n");
}

// Display All Students
void displayStudents()
{
    int i;

    if (count == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n========== MARKSHEET ==========\n");

    for (i = 0; i < count; i++)
    {
        printf("\nRoll No      : %d\n", s[i].roll);
        printf("Name         : %s\n", s[i].name);
        printf("Marks        : %d %d %d %d %d\n",
               s[i].m1, s[i].m2, s[i].m3, s[i].m4, s[i].m5);
        printf("Total        : %d\n", s[i].total);
        printf("Percentage   : %.2f%%\n", s[i].percentage);
        printf("Grade        : %c\n", s[i].grade);
    }
}

// Search Student
void searchStudent()
{
    int roll, i;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &roll);

    for (i = 0; i < count; i++)
    {
        if (s[i].roll == roll)
        {
            printf("\nStudent Found!\n");
            printf("Name         : %s\n", s[i].name);
            printf("Total        : %d\n", s[i].total);
            printf("Percentage   : %.2f%%\n", s[i].percentage);
            printf("Grade        : %c\n", s[i].grade);
            return;
        }
    }

    printf("\nStudent Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n=================================");
        printf("\n     MARKSHEET GENERATION SYSTEM");
        printf("\n=================================");
        printf("\n1. Add Student");
        printf("\n2. Display All Marksheets");
        printf("\n3. Search Student");
        printf("\n4. Exit");
        printf("\nEnter Your Choice: ");
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
            printf("\nThank You!\n");
            break;

        default:
            printf("\nInvalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}