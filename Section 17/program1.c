#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

typedef struct emp
{
    char eid[10];
    char name[100];
    char date[10];
    char salary[10];
} em;
void main()
{
    int n, i, j;
    FILE *fp;
    fp = fopen("EmployeesInfo.txt", "w");
    if(fp==NULL || ferror(fp)) {
        printf("Cant Open File...");
        return ;
    }
    printf("\nEnter Number of Employees : ");
    scanf("%d", &n);
    em emp[n];
    for(i=0;i<n;i++){
        printf("Emp ID : ");
        scanf("%s",&emp[i].eid);
        printf("Emp name : ");
        scanf("%s",emp[i].name);
        printf("Emp date : ");
        scanf("%s",emp[i].date);
        printf("Emp Salary : ");
        scanf("%s",emp[i].salary);
        }
    fprintf(fp,"Employee Details : ");
    fprintf(fp ,"==========================\n");
    for(i=0;i<n;i++){
        fprintf(fp,"\nThe details of %d Employee\n",i+1);
        fprintf(fp,"Id : %s\n",emp->eid);
        fprintf(fp,"Id : %s\n",emp->name);
        fprintf(fp,"Id : %s\n",emp->date);
        fprintf(fp,"Id : %s\n",emp->salary);
    }
    fclose(fp);
}
