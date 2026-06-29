#include <stdio.h>
#include <string.h>

#define MAX 100

struct Patient
{
    int id;
    char name[50];
    char disease[50];
    int age;
};

struct Patient p[MAX];
int count = 0;

// Function prototypes
void addPatient();
void viewPatients();
void searchPatient();
void updatePatient();
void deletePatient();

int main()
{
    int choice;

    do
    {
        printf("\n===== HOSPITAL MANAGEMENT SYSTEM =====\n");
        printf("1. Add Patient\n");
        printf("2. View Patients\n");
        printf("3. Search Patient\n");
        printf("4. Update Patient\n");
        printf("5. Delete Patient\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addPatient();
            break;
        case 2:
            viewPatients();
            break;
        case 3:
            searchPatient();
            break;
        case 4:
            updatePatient();
            break;
        case 5:
            deletePatient();
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

// Add Patient
void addPatient()
{
    printf("Enter Patient ID: ");
    scanf("%d", &p[count].id);

    printf("Enter Name: ");
    scanf("%s", p[count].name);

    printf("Enter Disease: ");
    scanf("%s", p[count].disease);

    printf("Enter Age: ");
    scanf("%d", &p[count].age);

    count++;
    printf("Patient added successfully!\n");
}

// View Patients
void viewPatients()
{
    if (count == 0)
    {
        printf("No patient records found!\n");
        return;
    }

    printf("\n----- PATIENT LIST -----\n");
    for (int i = 0; i < count; i++)
    {
        printf("\nPatient %d\n", i + 1);
        printf("ID      : %d\n", p[i].id);
        printf("Name    : %s\n", p[i].name);
        printf("Disease : %s\n", p[i].disease);
        printf("Age     : %d\n", p[i].age);
    }
}

// Search Patient
void searchPatient()
{
    int id, found = 0;

    printf("Enter Patient ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (p[i].id == id)
        {
            printf("\nPatient Found!\n");
            printf("Name    : %s\n", p[i].name);
            printf("Disease : %s\n", p[i].disease);
            printf("Age     : %d\n", p[i].age);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Patient not found!\n");
}

// Update Patient
void updatePatient()
{
    int id, found = 0;

    printf("Enter Patient ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (p[i].id == id)
        {

            printf("Enter new name: ");
            scanf("%s", p[i].name);

            printf("Enter new disease: ");
            scanf("%s", p[i].disease);

            printf("Enter new age: ");
            scanf("%d", &p[i].age);

            printf("Patient updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Patient not found!\n");
}

// Delete Patient
void deletePatient()
{
    int id, found = 0;

    printf("Enter Patient ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (p[i].id == id)
        {

            for (int j = i; j < count - 1; j++)
            {
                p[j] = p[j + 1];
            }

            count--;
            printf("Patient deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Patient not found!\n");
}