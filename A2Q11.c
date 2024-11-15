// Q11. WAP to implement Insert -Front, any position in between & end in an array. Print
// the array before insert & after insert.

#include <stdio.h>

int main(){
  int i,pc,val,n,arr[100],a,k,j=0;
  printf("Enter no. of entries ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
      printf("Enter the element %d: ",i+1);
      scanf("%d",&arr[i]);
  }


  for(i=0;i<n;i++){
   printf("arr [%d]: %d\n",i,arr[i]);
  }

  printf("Enter the operation you want to perform \n 1 for insertion at front \t\t 2 for insertion at any place \t\t 3 for insertion at end \nEnter your choice:");
  scanf("%d",&a);

  switch(a){
   case 1:
   printf("Enter the value to be added in front : ");
   scanf("%d",&val);
   for(k=n;k>=1;k--){
       arr[k]=arr[k-1];
   }
   arr[0]=val;
   j++;
   printf("UPDATED ARRAY \n");
   for(k=0;k<n+1;k++){
       printf("arr[%d]=%d\n",k,arr[k]);
   }

   case 2:
   printf("Enter the position where you want to add the value (note array starts from 0) : ");
   scanf("%d",&pc);
   printf("Enter the value to be added at %d place : ",pc);
   scanf("%d",&val);
   for(k=pc+1;k>=n;k--){
       arr[k]=arr[k-1];
   }
   arr[pc]=val;
   j++;
   printf("UPDATED ARRAY \n");
   for(k=0;k<n+1;k++){
       printf("arr[%d]=%d\n",k,arr[k]);
   } 

   case 3:
   printf("Enter the value to be added in end : ");
   scanf("%d",&val);
   for(k=n+1;k>=n;k--){
       arr[k]=val;
   }
   printf("UPDATED ARRAY \n");
   for(k=0;k<n+1;k++){
       printf("arr[%d]=%d\n",k,arr[k]);
   }
  }
  return 0;
}