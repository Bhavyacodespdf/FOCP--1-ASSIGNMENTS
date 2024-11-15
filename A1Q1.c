//Q1:WAP to check whether a given is Armstrong or not.
#include <stdio.h>
#include <math.h> 


int main() {
   int a,a1,i,temp=0,k,len,c=0;
   printf("Enter a number to check whether its armstrong or not : ");
   scanf("%d",&a);
   k=a;
   a1=a;
   while(a1>0){
    a1=a1/10;
    c++;
   }
   while (a>0){
   i=a%10;
   temp=temp + pow(i,c);
   a=a/10;
}
   if (k==temp){
       printf("%d IS AN ARMSTRONG NUMBER",k);
   }
   else {
       printf("%d IS NOT AN ARMSTRONG NUMBER",k);
   }
}