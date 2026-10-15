#include<stdio.h>
int main(void){

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j<6 ; j++)
        {
            if (j>i)
            {
                break;
            }
            printf("%d\t",i);
            
        }
        printf("\n");
        
    }
    

    return 0;
}