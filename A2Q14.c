// Q14. Given an array of n integers. The task is to print the duplicates in the given array.
// If there are no duplicates then print -1.
// Examples:
// Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
// Output: 2 10 11

#include<stdio.h>
int main(){
    int n,a=0;
    printf("Enter number of elements for arrays : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements for array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nYour array is : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
                a=1;
            }
        }
    }
    if(a==0){
        printf("-1");
    }
    return 0;
}

