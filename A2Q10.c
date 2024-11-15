// Q10. WAP to count prime numbers in an array.

#include <stdio.h>

int main(){
  int i,j,n,c=0,arr[100];
  printf("Enter no. of entries ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
      printf("Enter the element%d: ",i+1);
      scanf("%d",&arr[i]);
  }

  for(i=0;i<n;i++){
   for(j=2;j<=n;j++){
      if (arr[i]%j==0){
          c++;
      }
   }
  }

  printf("Number of prime numbers in an array : %d\n",c);

  return 0;

}
