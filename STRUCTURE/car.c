#include<stdio.h>
struct car {
    int carid;
    char model[30];
    int rent;
    int totalcost;
};
int main(){
    struct car cars[3];
    int days;
    printf("Enter the details : ");
    for(int i=0;i<3;i++){
        printf("\nEnter car details %d",i+1);
        printf("\nID : ");
        scanf("%d",&cars[i].carid);
        printf("Model : ");
        scanf("%s",&cars[i].model);
        printf("Rent : ");
        scanf("%d",&cars[i].rent);
    }
    printf("\nEnter the Number of days : ");
    scanf("%d",&days);
    for(int i=0;i<3;i++){
        cars[i].totalcost = cars[i].rent*days;
    }
    printf("\nDetails of the cars : ");
    for(int i=0;i<3;i++){
        printf("\n");
        printf("\nCAR %d DETAILS",i+1);
        printf("\nID : %d\nModel : %s\nRent per day : %d\ntotalcost : %d",cars[i].carid,cars[i].model,cars[i].rent,cars[i].totalcost);
    }
}