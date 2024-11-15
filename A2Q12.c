// Q12. WAP to implement delete-Front, any position in between & end in an array. Print
// the array before delete & after delete.

#include <stdio.h>

int main(){
  int i,index,n,arr[100],a,k,j=0;
  printf("Enter no. of entries ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
      printf("Enter the element %d: ",i+1);
      scanf("%d",&arr[i]);
  }


  for(i=0;i<n;i++){
   printf("arr [%d]: %d\n",i,arr[i]);
  }


  printf("Enter the operation you want to perform \n 1 for deletion at front \t\t 2 for deletion at any place \t\t 3 for deletion at end \nEnter your choice:");
  scanf("%d",&a);

  switch(a){
   case 1:
   for(k=0;k<n;k++){
       arr[k]=arr[k+1];
   }
   printf("UPDATED ARRAY \n");
   for(k=0;k<n-1;k++){
       printf("arr[%d]=%d\n",k,arr[k]);
   }
   break;

   case 2:
   printf("Enter the position where you want to delete the value (note array starts from 0) : ");
   scanf("%d",&index);
   for(k=index;k<n-1;k++){
       arr[index]=arr[k+1];
   }
   printf("UPDATED ARRAY \n");
   for(k=0;k<n-1;k++){
       printf("arr[%d]=%d\n",k,arr[k]);
   } 
   break;

   case 3:
   printf("UPDATED ARRAY \n");
   for(k=0;k<n-1;k++){
       printf("arr[%d]=%d\n",k,arr[k]);
   }
   break;


  }
  return 0;
}
