#include<stdio.h>
int main(){
    int n,large1=0,large2=0;
    printf("Enter the Number of Terms : ");
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i =0;i<n;i++){
        printf("Enter the element %d :",i+1);
        scanf("%d",arr+i);
    }
    for(int i =0;i<n;i++){
        if(*(arr+i)>large1){
            large2 = large1;
            large1 =  *(arr+i);
        }
    }
    printf("\nThe largest element is %d",large1);
    printf("\nThe Second largest element is %d",large2);
}