//Q10
#include <stdio.h>


int main() //q10
{
   int row,c=1,blocksp,i,j;


   printf("Input number of rows: ");
   scanf("%d",&row);


   for(i=0;i<row;i++)
   {
       for(blocksp=1;blocksp<=row-i;blocksp++)
           printf("  ");


       for(j=0;j<=i;j++)
       {
           if (j==0||i==0)
               c=1;
           else
              c=c*(i-j+1)/j;
           printf("% 4d",c);
       }


       printf("\n");
   }
}
