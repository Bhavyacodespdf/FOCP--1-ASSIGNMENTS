// Q9. WAP to find a peak element which is not smaller than its neighbors.

#include <stdio.h>

int main(){
  int i,n,c=0,marks[100];
  printf("Enter no. of entries ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
      printf("Enter the marks of student%d: ",i+1);
      scanf("%d",&marks[i]);
  }

  for(i=0;i<n-1;i++){
      if (marks[i]>marks[i-1] && marks[i]>marks[i+1]){
          printf("Element %d : %d\n",i,marks[i]);
          c=c+1;
      }
  }
  if(c==0){
   printf("No such element exists");
  }

  return 0;
}