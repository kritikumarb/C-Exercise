#include<stdio.h>
#include<conio.h>
typedef struct student{
    int roll;
    char name[50];
    float sub1;
    float sub2;
    float sub3;
}sstudent;
void main()
{
    //n = total no of students
    float sum=0;
    float avg;
    int n;
    printf("Enter No of students : ");
    scanf("%d",&n);
    sstudent std[n];
    int x=1;
    for(int i=0;i<n;i++){
        printf("\nEnter for student 1 : \n");
        printf("=========================\n");
        printf("\nName : ");
        scanf("%s",&std[i].name);
        printf("Roll No : ");
        scanf("%d",&std[i].roll);
        printf("Enter Marks for subject 1 : ");
        scanf("%f",&std[i].sub1);
        printf("Enter Marks for subject 2 : ");
        scanf("%f",&std[i].sub2);
        printf("Enter marks for subject 3 : ");
        scanf("%f",&std[i].sub3);
        sum = sum + (int)(std[i].sub1 + std[i].sub2 + std[i].sub3);
        printf("Total Marks scored is : %.2f",sum);
    }
    avg = sum/n;
    printf("\nAverage of all marks is : %.2f",avg);
    getch();

}
