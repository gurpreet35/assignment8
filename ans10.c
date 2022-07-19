/*
1234321
123 321
12   21
1     1
*/
#include <stdio.h>
int main()
{
   int i, j, k, l,m ,temp,temp1, flag = 0;
   for (i = 1; i <= 5; i++)
   { 
      for (j = 1; j <= 5 - i; j++)
      {
         flag=1;
      }
      if(flag==1){
         for(temp=1;temp<=5-i;temp++){
            printf("%d",temp);
         }
      }
      if(i!=1){
       
       for (k = 1; k <= 2*i -3; k++)
      {
         printf(" ");
      } 
      }
      if(i!=1){
       for (l = 5 - i; l >= 1; l--)
      { 
      flag=2;
      }
      if(flag==2){
      for(temp=5-i;temp>=1;temp--){
         printf("%d",temp);
      }
      }
      }
      else
         { 
            flag=3; 
         }
         if(flag==3){
            for(m=3;m>=1;m--)
         {
            printf("%d",m);
         } 
         }
      printf("\n");
   }
   return 0;
}
