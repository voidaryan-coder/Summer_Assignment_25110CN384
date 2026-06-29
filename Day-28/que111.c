#include <stdio.h>
#include <string.h>

struct Ticket
{
    char name[50];
    int ticketNo;
    int seats;
};

int main()
{
    struct Ticket tickets[100];
    int count = 0;
    int choice, i, found;
    char searchName[50];
    int availableSeats = 50;

    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. View All Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Available Seats\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            if (availableSeats == 0)
            {
                printf("No seats available!\n");
                break;
            }

            printf("Enter Passenger Name: ");
            scanf("%s", tickets[count].name);

            printf("Enter Ticket Number: ");
            scanf("%d", &tickets[count].ticketNo);

            printf("Enter Number of Seats: ");
            scanf("%d", &tickets[count].seats);

            if (tickets[count].seats <= availableSeats)
            {
                availableSeats -= tickets[count].seats;
                count++;
                printf("Ticket Booked Successfully!\n");
            }
            else
            {
                printf("Only %d seats available!\n", availableSeats);
            }
            break;

        case 2:
            if (count == 0)
            {
                printf("No tickets booked!\n");
            }
            else
            {
                printf("\n----- ALL TICKETS -----\n");
                for (i = 0; i < count; i++)
                {
                    printf("\nTicket %d\n", i + 1);
                    printf("Name       : %s\n", tickets[i].name);
                    printf("Ticket No  : %d\n", tickets[i].ticketNo);
                    printf("Seats      : %d\n", tickets[i].seats);
                }
            }
            break;

        case 3:
            printf("Enter Name to Search: ");
            scanf("%s", searchName);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (strcmp(tickets[i].name, searchName) == 0)
                {
                    printf("\nTicket Found!\n");
                    printf("Name       : %s\n", tickets[i].name);
                    printf("Ticket No  : %d\n", tickets[i].ticketNo);
                    printf("Seats      : %d\n", tickets[i].seats);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Ticket not found!\n");

            break;

        case 4:
            printf("Enter Name to Cancel Ticket: ");
            scanf("%s", searchName);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (strcmp(tickets[i].name, searchName) == 0)
                {

                    availableSeats += tickets[i].seats;

                    for (int j = i; j < count - 1; j++)
                    {
                        tickets[j] = tickets[j + 1];
                    }

                    count--;
                    printf("Ticket Cancelled Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Ticket not found!\n");

            break;

        case 5:
            printf("Available Seats: %d\n", availableSeats);
            break;

        case 6:
            printf("Thank you for using Ticket System!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}