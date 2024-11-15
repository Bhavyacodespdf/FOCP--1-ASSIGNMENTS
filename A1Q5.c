//Q5 WAP to check whether number is Perfect Number or not.
//(To check perfect number, we have to find all divisors of that number and find their sum, if
//sum of divisors is equal to number it means number is Perfect Number.

 #include <stdio.h>

int main() {
   int a,i,sum=0;
   printf("Enter a number to find whether its a perfect number or not : ");
   scanf("%d",&a);
   for(i=1;i<a;i++){
       if(a%i==0){
           sum=sum+i;
       }
       else{
           printf(" ");
       }
   }


   if(a==sum) {
       printf("ITS A PERFECT NUMBER");
   }
   else {
       printf("NOT A PERFECT NUMBER");
   }
      


}