// Q4. WAP to find Who & how many students have scored 99 in an array Marks.

#include <stdio.h>

nt main(){
   int i,flag,n,marks[100];
   printf("Enter no. of entries ");
   scanf("%d",&n);
   for(i=0;i<n;i++){
       printf("Enter the marks of student%d: ",i+1);
       scanf("%d",&marks[i]);
   }


   printf("Finding no. of studentd who've 99 ...");
   for(i=0;i<n;i++){
       if (marks[i]==99) {
           flag+=1;
           printf("\n Student%d scored 99 ",i+1);
       }
   }


   printf("\n Number of students who have scored 99 is %d",flag);
   if (flag==0)
   printf("\n none of the student scored 99");


}
