/*
    1
   121
  12321
 1234321
*/
#include<stdio.h>
int main(){
    int i,j,k,temp,flag=0;
    for (i=1; i <=4; i++)
    { 
        
        for ( j =1; j <=5-i; j++)
        {
           printf(" ");
        }
        for(k=1; k<=i;k++)
        {   
            flag=1;
           
        }
            printf("\n");
            if(flag==1){
            for(j=1;j<=5-i;j++)
            {
                printf(" ");
            }
            for(temp=1;temp<=i;temp++)
            {
            printf("%d",temp);
            }
            for(temp=i-1;temp>=1;temp--)
            {
            printf("%d",temp);
            }
            }
        
    }
    return 0;
    
}