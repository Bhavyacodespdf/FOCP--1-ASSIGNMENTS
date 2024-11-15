// Q13. Given an array, the task is to cyclically rotate the array clockwise by one time.
// Examples:
// Input: arr[] = {1, 2, 3, 4, 5}
// Output: arr[] = {5, 1, 2, 3, 4}

#include <stdio.h>

int main(){
 int i,arr[100],k,n;
 printf("Enter no. of entries ");
 scanf("%d",&n);
 for(i=0;i<n;i++){
     printf("Enter the element %d: ",i+1);
     scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++){
   printf("arr [%d]:%d \n",i,arr[i]);
 }


 for(k=n;k>=1;k--){
   arr[k]=arr[k-1];
 }


 for(k=n-1;k<n;k++){
   arr[0]=arr[n];
 }


 printf("UPDATED ARRAY \n");
 for(k=0;k<n;k++){
   printf("arr [%d]:%d \n",k,arr[k]);
 }
}