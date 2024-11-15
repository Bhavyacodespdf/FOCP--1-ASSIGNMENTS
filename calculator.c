//ASSIGNMENT 3
//C CALCULATOR

#include <stdio.h>
#include <math.h>

int add(void);

int sub(void);

int multiply(void);

int div(void);

int logn(void);

int sqr(void);

int main(){
    int i,j=1,opr;
    float res;
    char c;


    printf("\n");

    for(i=0;i<55;i++)
    printf("* ");

    printf("\n \t\t\t\t\t C CALCULATOR \t\t\t\t\t");

    printf("\n");

    for(i=0;i<55;i++)
    printf("* ");

    printf("\n");

    for(j=0;;j++){
    printf("\nPress 'Y' to perfrom or 'N' to exit: ");
    scanf("%c",&c);

    if (c=='Y' || c=='y'){
    printf("\n \n OPERATIONS THAT CAN BE PERFORMED :");
    printf("\n");
    printf("\n1 : ADDITION \n2 : SUBTRACTION \n3 : MULTIPLICATION \n4 : DIVISION \n5: LOGARITHMIC VALUES \n6 : SQAURE ROOT \nEnter you choice:");
    scanf("%d",&opr);
    switch(opr){
        case 1:
        res=add();
        printf("%0.2f",res);
        break;

        case 2:
        res=sub();
        printf("%0.2f",res);
        break;

        case 3:
        res=multiply();
        printf("%0.2f",res);
        break;

        case 4:
        res=div();
        printf("%0.2f",res);
        break;

        case 5:
        res=logn();
        printf("%0.2f",res);
        break;

        case 6:
        res=sqr();
        printf("%0.2f",res);
        break;

        default:
        printf("Invalid output ... pls try again");
        break;
    }
    }
    else if (c=='N'|| c=='n'){
        break;
    }
    }
    return 0;
 }




int add(void){
float n1,n2,add;
printf("Enter number 1 - ");
scanf("%f",&n1);
printf("Enter number 2 - ");
scanf("%f",&n2);
add=n1+n2;
printf("%f + %f : ",n1,n2);
return add;
}



int sub(void){
float n1,n2,sub;
printf("Enter number 1 - ");
scanf("%f",&n1);
printf("Enter number 2 - ");
scanf("%f",&n2);
if (n1>n2){
sub=n1-n2;
printf("%f - %f : ",n1,n2);
return sub;
}
else if (n1<n2){
sub=n2-n1;
printf("%f - %f : ",n2,n1);
return sub;
}
}


int multiply(void){
    float n1,n2,mulp;
    printf("Enter number 1 - ");
    scanf("%f",&n1);
    printf("Enter number 2 - ");
    scanf("%f",&n2);
    mulp=n1*n2;
    printf("%f * %f : ",n1,n2);
    return mulp;

}

int div(void){
    float n1,n2,div;
    printf("Enter numerator - ");
    scanf("%f",&n1);
    printf("Enter denominator - ");
    scanf("%f",&n2);
    div=n1/n2;
    printf("%f / %f : ",n1,n2);
    return div;
   
}

int logn(void){
    float n,lv;
    printf("Enter number to find log - ");
    scanf("%f",&n);
    if(n>0){
    lv=log(n);
    printf( "log of %f : ",n);
    return lv;
    }
    else {
        printf("Log of negative number is undefined");
    }
}

int sqr(void){
    float n,sqr;
    printf("Enter number to find its square root - ");
    scanf("%f",&n);
    if(n>0){
    sqr=sqrt(n);
    printf( "log of %f : ",n);
    return sqr;
    }
    else {
        printf("square root of negative number doesnt exist");
    }
}

