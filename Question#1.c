#include<stdio.h>
int main(void){

    int shop[5][2];
    int grandTotal = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                printf("Enter Quantity for Product %d: ", i + 1);
                scanf("%d", &shop[i][j]);
            }
            else
            {
                printf("Enter Unit Price for Product %d: ", i + 1);
                scanf("%d", &shop[i][j]);
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        int productTotal = 1;
        
        for (int j = 0; j < 2; j++)
        {
            productTotal = shop[i][0] * shop[i][1];
        }

        grandTotal += productTotal;

        printf("\nResults:\nProducts: %d\nQuantity: %d\nUnitPrice: %d\nTotal Price: %d\n",i + 1, shop[i][0], shop[i][1], productTotal);
    }
    printf("Grand Total of All Products: %d\n", grandTotal);

    return 0;
}