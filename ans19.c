/*
  *****     *****
 *******   *******
********* *********
******MySirG*******
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
*/
#include<stdio.h>
int main(){
    int i,j,k,l;
      for (i=3; i <6; i++)
    {
        for ( j =1; j <6-i; j++)
        {
           printf(" ");
        }
        for(k=1; k<=i*2-1;k++)
        {
            printf("*");
        }
         if(i==3){
            printf("     ");
        }
        if(i==4){
            printf("   ");
        }
        if(i==5){
            printf(" ");
        } 
         for(l=1; l<=i*2-1;l++)
        {
            printf("*");
        } 
            printf("\n");
        
    }
    for (i=10; i >=1; i--)
    {   
         if(i==10)
        {
        printf("******MySirG*******");
        }
        else{
        for ( j =1; j <=10-i; j++)
        {
           printf(" ");
        }
        for(k=1; k<=2*i-1;k++)
        {
            printf("*");
        }
        }
            printf("\n");
        
    }
    return 0;
    
}