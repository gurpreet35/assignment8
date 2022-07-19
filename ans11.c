/*
    A
   ABA
  ABCBA
 ABCDCBA
*/
#include<stdio.h>
int main(){
    int i,j,k,flag=0;
    char temp;
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
            for(temp='A';temp<='A'+i-1;temp++)
            {
            printf("%c",temp);
            }
            for(temp='A'+i-2;temp>='A';temp--)
            {
            printf("%c",temp);
            }
            }
        
    }
    return 0;
    
}