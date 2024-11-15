//Q3 WAP to subtract two integers without using Minus (-) operator.

int main(){  
   int n1,n2,sub;
   printf("Enter first number : ");
   scanf("%d",&n1);
   printf("Enter second number : ");
   scanf("%d",&n2);
   if (n1>n2){
   sub = n1 + (~n2 + 1);
   printf("%d",sub);
   }
   else if(n2>n1){
   sub = n2 + (~n1 + 1);
   printf("%d",sub);
   }
   else{
       printf("ERROR ... The numbers are equal");  
   }   
}
