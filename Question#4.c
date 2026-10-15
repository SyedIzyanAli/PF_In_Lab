#include<stdio.h>
int main(void){

    
        for (int j = 5; j > 0; j--)
        {
            for (int k =1 ; k<6 ; k++)
            {
                if (k>j)
                {
                 break;
                }
                
                printf("%d\t",k);
            }
             printf("\n");       

            
        }
    
    

    return 0;
}