#include<stdio.h>
#include<stdlib.h>
int main(){
    int num,temp=0;
    printf("Enter the Number of Students : ");
    scanf("%d",&num);
    char name[num][25];
    int *marks = (int *)malloc(num * 5 * sizeof(int));
    int *result = (int *)malloc(num * sizeof(int));
    for(int i=0;i<num;i++){
        temp=0;
        printf("Enter the student %d name : ",i+1);
        scanf("%s[^\n]",&name[i]);
        printf("Marks of Student  %d : \n",i+1);
        for(int j=0;j<5;j++){
            printf("mark %d : ",j+1);
            scanf("%d", (marks+(i*5)+j));
            if(*(marks+(i*5)+j)<50){
                temp+=1;
            }
        }
        if(temp>=1){
            *(result+i)=0;
        }else{
            *(result+i)=1;
        }
    }
    for(int i=0;i<num;i++){
        if(*(result+i)==1){
            printf("student %s have passed\n",name[i]);
        }else{
            printf("student %s have failed\n",name[i]);
        }
    }
} 