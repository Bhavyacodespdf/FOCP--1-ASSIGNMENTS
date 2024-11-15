//Q4  WAP to accept two integer numbers and swap them using 4 different methods in C
//language.

#include <stdio.h>
int main() { //method 1
   int n1,n2,temp;
   print("SWAPPING NUMBERS USING THIRD VARIABLE \n");
   printf("Enter the first number : ");
   scanf("%d",&n1);


   printf("Enter second number : ");
   scanf("%d",&n2);


   printf("BEFORE SWAPPING");
   printf("\n");
   printf("%d : %d",n1,n2);


   temp=n1;
   n1=n2;
   n2=temp;


   printf("\nAFTER SWAPPING");
   printf("\n");
   printf("%d : %d",n1,n2);


}


#include <stdio.h>
int main() { //method 2
   int n1,n2,sum;
   print("SWAPPING NUMBERS WITHOUT USING THIRD VARIABLE \n");
   printf("Enter the first number : ");
   scanf("%d",&n1);


   printf("Enter second number : ");
   scanf("%d",&n2);


   printf("BEFORE SWAPPING");
   printf("\n");
   printf("%d : %d",n1,n2);


   sum=n1+n2;
   n1=sum-n1;
   n2=sum-n2;


   printf("\nAFTER SWAPPING");
   printf("\n");
   printf("%d : %d",n1,n2);


}


#include <stdio.h>
int main() { //method 3 
   int n1,n2;
   print("SWAPPING NUMBERS USING BITWISE XOR \n");
   printf("Enter the first number : ");
   scanf("%d",&n1);


   printf("Enter second number : ");
   scanf("%d",&n2);


   printf("BEFORE SWAPPING");
   printf("\n");
   printf("%d : %d",n1,n2);


   n1=n1^n2;
   n2=n1^n2;
   n1=n1^n2;
  
   printf("\nAFTER SWAPPING");
   printf("\n");
   printf("%d : %d",n1,n2);


}

int main(){
    int n1,n2,num;

    print("SWAPPING NUMBERS USING POINTERS \n");
    printf("Enter the first number : ");
    scanf("%d",&n1);
    
    printf("Enter second number : ");
    scanf("%d",&n2);

    num=*n1;
    *n1=*n2;
    *n2=num;
    printf("The swapped numbers using pointers are:%d & %d.\n",*num1,*num2);
}
