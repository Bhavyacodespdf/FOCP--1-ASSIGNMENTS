// Q7. WAP to check whether score is even or odd in an array.

#include <stdio.h>

int main(){
   int i,n,marks[100];
   printf("Enter no. of entries ");
   scanf("%d",&n);
   for(i=0;i<n;i++){
       printf("Enter the marks of student%d: ",i+1);
       scanf("%d",&marks[i]);
   }


   for(i=0;i<n;i++){
       if (marks[i]%2==0){
           printf("Score of student%d i.e %d is EVEN \n",i,marks[i]);
       }
       else{
           printf("Score of student%d i.e %d is ODD \n",i,marks[i]);
       }
   }
   return 0;


}
