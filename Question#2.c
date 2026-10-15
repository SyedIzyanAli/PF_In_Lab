#include<stdio.h>
int main(void){

for(int i = 1; i<6; i++){

for (int j = 1; j < 6; j++)
{
    if (j>i)
    {
        break;
    }
    if ((j%2)!=0)
    {
        printf("%d\t",j*j*j);
    }
    else
    printf("%d\t",j*j);   
}
printf("\n");

}
    return 0;
}