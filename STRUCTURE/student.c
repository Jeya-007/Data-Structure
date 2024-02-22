#include<stdio.h>
struct student {
    char name[30];
    int age;
    int totalmarks;
};
int main(){
    struct student s[2];
    for(int i=0;i<2;i++){
        printf("Enter the Name of Student %d: ",i+1);
        scanf("%s",&s[i].name);
        printf("Enter the Age of Student : ");
        scanf("%d",&s[i].age);
        printf("Enter the total marks : ");
        scanf("%d",&s[i].totalmarks);
        printf("\n");
    }
    printf("The information of the students : ");
    for(int i=0;i<2;i++){
        printf("\nThe details of the student %d : ",i+1);
        printf("\nName : %s",s[i].name);
        printf("\nAge : %d",s[i].age);
        printf("\nTotal Marks : %d",s[i].totalmarks);
        printf("\n");
    }
    printf("\nAverage pf the total marks is : %.2f",((float)s[1].totalmarks+(float)s[2].totalmarks)/2);

}