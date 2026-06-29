#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNo;
    char name[50];
    char course[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int count = 0;
    int choice, i, found, roll;

    do
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter Roll No: ");
            scanf("%d", &s[count].rollNo);

            printf("Enter Name: ");
            scanf("%s", s[count].name);

            printf("Enter Course: ");
            scanf("%s", s[count].course);

            printf("Enter Marks: ");
            scanf("%f", &s[count].marks);

            count++;
            printf("Student added successfully!\n");
            break;

        case 2:
            if (count == 0)
            {
                printf("No student records found!\n");
            }
            else
            {
                printf("\n----- STUDENT LIST -----\n");
                for (i = 0; i < count; i++)
                {
                    printf("\nStudent %d\n", i + 1);
                    printf("Roll No : %d\n", s[i].rollNo);
                    printf("Name    : %s\n", s[i].name);
                    printf("Course  : %s\n", s[i].course);
                    printf("Marks   : %.2f\n", s[i].marks);
                }
            }
            break;

        case 3:
            printf("Enter Roll No to search: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (s[i].rollNo == roll)
                {
                    printf("\nStudent Found!\n");
                    printf("Name   : %s\n", s[i].name);
                    printf("Course : %s\n", s[i].course);
                    printf("Marks  : %.2f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student not found!\n");
            break;

        case 4:
            printf("Enter Roll No to update: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (s[i].rollNo == roll)
                {

                    printf("Enter new name: ");
                    scanf("%s", s[i].name);

                    printf("Enter new course: ");
                    scanf("%s", s[i].course);

                    printf("Enter new marks: ");
                    scanf("%f", &s[i].marks);

                    printf("Student updated successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student not found!\n");
            break;

        case 5:
            printf("Enter Roll No to delete: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (s[i].rollNo == roll)
                {

                    for (int j = i; j < count - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }

                    count--;
                    printf("Student deleted successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student not found!\n");
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