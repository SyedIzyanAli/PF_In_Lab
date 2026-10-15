#include<stdio.h>
int main(void){

    int matrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element %d%d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int Square = 1;
    if (Square == 1)
    {
        printf("1. Square Matrix: Yes\n");
    }
    else
    {
        printf("1. Square Matrix: No\n");
    }

    int Null = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] != 0)
            {
                Null = 0;
            }
        }
    }
    if (Null == 1)
    {
        printf("2. Null Matrix: Yes\n");
    }
    else
    {
        printf("2. Null Matrix: No\n");
    }

    int Diagonal = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i != j)
            {
                if (matrix[i][j] != 0)
                {
                    Diagonal = 0;
                }
            }
        }
    }
    if (Diagonal == 1)
    {
        printf("3. Diagonal Matrix: Yes\n");
    }
    else
    {
        printf("3. Diagonal Matrix: No\n");
    }

    int Upper = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i > j)
            {
                if (matrix[i][j] != 0)
                {
                    Upper = 0;
                }
            }
        }
    }
    if (Upper == 1)
    {
        printf("4. Upper Triangular Matrix: Yes\n");
    }
    else
    {
        printf("4. Upper Triangular Matrix: No\n");
    }

   
    return 0;
}