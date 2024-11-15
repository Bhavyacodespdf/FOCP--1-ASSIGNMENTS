// Q5. WAP to find sum of all scores in Marks array.

#include <stdio.h>

int main(){
   int i,n,marks[100],sum;
   printf("Enter no. of entries ");
   scanf("%d",&n);
   for(i=0;i<n;i++){
       printf("Enter the marks of student%d: ",i+1);
       scanf("%d",&marks[i]);
   }


   for(i=0;i<n;i++){
       sum+=marks[i];
   }
   printf("SUM OF ALL SCORES IN THE ARRAY = %d",sum);
   return 0;


}
