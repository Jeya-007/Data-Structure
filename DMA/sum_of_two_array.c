#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the Number of Terms : ");
    scanf("%d",&n);
    int *arr1 = (int *)malloc(n*sizeof(int));
    int *arr2 = (int *)malloc(n*sizeof(int));
    int *arr3 = (int *)malloc(n*sizeof(int));
    for(int i =0;i<n;i++){
        printf("Enter the element %d in array 1:",i+1);
        scanf("%d",(arr1+i));
    }
    for(int i =0;i<n;i++){
        printf("Enter the element %d in array 2:",i+1);
        scanf("%d",(arr2+i));
    }
    for(int i =0;i<n;i++){
        *(arr3+i)=*(arr1+i)+*(arr2+i);
    }
    printf("\nThe sum of the two array elements are : \n");
    for(int i =0;i<n;i++){
        printf("%d ",*(arr3+i));
    }
}