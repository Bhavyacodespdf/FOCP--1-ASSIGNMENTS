//Q2 WAP to read two integers and print their HCF (Highest Common Factor)
#include <stdio.h>
#include <math.h> 


int main() {
   int a,b,i,j,hcf=1;
   printf("Enter first number : ");
   scanf("%d",&a);
   printf("Enter second number : ");
   scanf("%d",&b);
   for (i=1;i<=a;i++) {


       for(j=1;j<=b;j++){


           if(a%i==0 && b%j==0){
              
               if(i==j){
                   hcf= i;
               }
               else {


               }
           }




       }
   }
   printf("%d",hcf);


}