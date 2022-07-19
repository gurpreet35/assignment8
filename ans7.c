/*
**********
****  ****
***    ***
**      **
*        *
*/
#include<stdio.h>
int main(){
    int i,j,k,l;
    for (i=1; i <=5; i++)
    {
        for ( j =1; j <=6-i; j++)
        {
           printf("*");
        }
        for( l =2; l <=2*i-1; l++){
            printf(" ");
        }
        for(k=1; k<=6-i;k++)
        {
            printf("*");
        }
            printf("\n");
        
    }
    return 0;
    
}