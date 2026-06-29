#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Product p[100];
    int count = 0;
    int choice, i, found, id;

    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. View All Products\n");
        printf("3. Search Product\n");
        printf("4. Update Product\n");
        printf("5. Delete Product\n");
        printf("6. Total Inventory Value\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter Product ID: ");
            scanf("%d", &p[count].id);

            printf("Enter Product Name: ");
            scanf("%s", p[count].name);

            printf("Enter Quantity: ");
            scanf("%d", &p[count].quantity);

            printf("Enter Price: ");
            scanf("%f", &p[count].price);

            count++;
            printf("Product added successfully!\n");
            break;

        case 2:
            if (count == 0)
            {
                printf("No products available!\n");
            }
            else
            {
                printf("\n----- PRODUCT LIST -----\n");
                for (i = 0; i < count; i++)
                {
                    printf("\nProduct %d\n", i + 1);
                    printf("ID       : %d\n", p[i].id);
                    printf("Name     : %s\n", p[i].name);
                    printf("Quantity : %d\n", p[i].quantity);
                    printf("Price    : %.2f\n", p[i].price);
                }
            }
            break;

        case 3:
            printf("Enter Product ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (p[i].id == id)
                {
                    printf("\nProduct Found!\n");
                    printf("Name     : %s\n", p[i].name);
                    printf("Quantity : %d\n", p[i].quantity);
                    printf("Price    : %.2f\n", p[i].price);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Product not found!\n");
            break;

        case 4:
            printf("Enter Product ID to update: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (p[i].id == id)
                {
                    printf("Enter new name: ");
                    scanf("%s", p[i].name);

                    printf("Enter new quantity: ");
                    scanf("%d", &p[i].quantity);

                    printf("Enter new price: ");
                    scanf("%f", &p[i].price);

                    printf("Product updated successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Product not found!\n");
            break;

        case 5:
            printf("Enter Product ID to delete: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < count; i++)
            {
                if (p[i].id == id)
                {

                    for (int j = i; j < count - 1; j++)
                    {
                        p[j] = p[j + 1];
                    }

                    count--;
                    printf("Product deleted successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Product not found!\n");
            break;

        case 6:
        {
            float total = 0;
            for (i = 0; i < count; i++)
            {
                total += p[i].quantity * p[i].price;
            }
            printf("Total Inventory Value = %.2f\n", total);
        }
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