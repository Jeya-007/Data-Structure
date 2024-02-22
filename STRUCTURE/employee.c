#include<stdio.h>
struct employee {
    int empid;
    char name[50];
    int salary;
}e[3];
int main(){
    int id=1;
    printf("Enter the details of the employees : \n");
    for(int i=0;i<3;i++){
        printf("Enter the name of employee %d : ",i+1);
        scanf("%s", &e[i].name);
        e[i].empid = id;
        id+=1;
        printf("Enter the salary of employee %d: ",i+1);
        scanf("%d",&e[i].salary);
        printf("\n");
    }
    int highest=0;
    int lowest=0;
    int temp;
    for(int i=0;i<3;i++){
        temp=0;
        for(int j=0;j<3;j++){
            if(i==j){
                continue;
            }
            if(e[i].salary > e[j].salary){
                temp++;
            }
        }
        if(temp==2){
            highest=i;
        }else if(temp==0){
            lowest=i;
        }
    }
    printf("\nperson with highest salary : ");
    printf("\nEmpid : %d",e[highest].empid);
    printf("\nName : %s",e[highest].name);
    printf("\nSalary : %d",e[highest].salary);
    printf("\n\nperson with lowest salary : ");
    printf("\nEmpid : %d",e[lowest].empid);
    printf("\nName : %s",e[lowest].name);
    printf("\nSalary : %d",e[lowest].salary);
}