#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,odd=1,even=1;
    printf("Enter the Number of Terms : ");
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i =0;i<n;i++){
        printf("Enter the element %d :",i+1);
        scanf("%d",arr+i);
        if((*(arr+i)%2==0)){
            even*= *(arr+i);
        }else{
            odd*= *(arr+i);
        }
    }
    printf("\nMultiplication of Odd Elements : %d\n",odd);
    printf("Multiplication of Even Elements : %d",even);
    
}