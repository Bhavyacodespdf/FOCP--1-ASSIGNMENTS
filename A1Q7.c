//Q7 WAP for Binary to Decimal conversion & Decimal to Binary for a given number as per
//user’s choice.

#include <stdio.h>

void decimaltobin(int n)
{
    int num1=n,x,y[50],i=0;
    do
    {
        x=num1%2;
        num1/=2;
        y[i]=x;
        i++;
        if (num1==0)
        break;
    } 
    while (num1>0);

    printf("The decimal number '%d' in binary is: ",n);
    for (int j=i-1;j>=0;j--)
    {
        printf("%d",y[j]);
    }
}

void binarytodec(int n)
{
    int num2=n,num1=n,x=0,y,z=0,i=1;
    do
    {
        num1/=10;
        x+=1;
    } 
    while (num1!=0);
    
    while (num2)
    {
        y=num2%10;
        num2/=10;
        z+=y*i;
        i*=2;
    }
    printf("The Binary number %d in decimal is %d.",num,z);   
}

int main()
{
    int choice,num;
    printf("What operation do you want to do?\n1 for decimal to binary\n2 for binary to decimal\nEnter the your choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("Enter the Number (of base 10):");
        scanf("%d",&numo);
        decimaltobin(numo);
    }
    else if (choice==2)
    {
        printf("Enter the Binary Number (base 2):");
        scanf("%d",&numo);
        binarytodec(numo);
    }
    else 
    {
        printf("Invalid input.");
    }
}

