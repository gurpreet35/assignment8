/*
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A
*/#include <stdio.h>
int main()
{
   int i, j, k, l,m ,temp1, flag = 0;
   char temp;
   for (i = 1; i <= 8; i++)
   { 
      for (j = 1; j <= 8- i; j++)
      {
         flag=1;
      }
      if(flag==1){
         for(temp='A';temp<=7-i+'A';temp++){
            printf("%c",temp);
         }
      }
      if(i!=1){
       
       for (k = 1; k <= 2*i -3; k++)
      {
         printf(" ");
      } 
      }
      if(i!=1){
       for (l = 8- i; l >= 1; l--)
      { 
      flag=2;
      }
      if(flag==2){
      for(temp='A'+7-i;temp>='A';temp--){
         printf("%c",temp);
      }
      }
      }
      else
         { 
            flag=3; 
         }
         if(flag==3){
            for(m='F';m>='A';m--)
         {
            printf("%c",m);
         } 
         }
      printf("\n");
   }
   return 0;
}
