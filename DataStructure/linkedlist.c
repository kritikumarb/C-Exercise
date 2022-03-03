#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};
void insertElementEnd(struct node *, int);
struct node* insertElementStart(struct node *, int);
void showList(struct node *);
void main(){
    int n,k,c=1;
    struct node *head = (struct node *)malloc(sizeof(struct  node));
    printf("Enter First node : ");
    scanf("%d",&head->data);

    head->link = NULL;


    while(c){
    printf("\n\nEnter Your Choice : \n");
    printf("1)Show All Elements  \n");
    printf("2)Insert At Start  \n");
    printf("3)Insert at End  \n");
    printf("4)End Of Loop \n");
    scanf("%d",&k);
    switch(k){
    case 1:
        //show list
        showList(head);
        break;
    case 2:
        printf("Enter element(start) : ");
        scanf("%d",&n);
        head = insertElementStart(head , n);
        break;
    case 3:
        printf("Enter element(End) : ");
        scanf("%d",&n);
        insertElementEnd(head , n);
        break;
    default:
        c=0;
    }

    }
    getch();
}
void showList(struct node *hea){
    struct node *ptr = hea;
    while(ptr != NULL){
        printf("%d\t",ptr->data);
        ptr = ptr->link;
    }
}
void insertElementEnd(struct node *hea , int x){
    struct node *ptr = hea;
    struct node *current = (struct node *)malloc(sizeof(struct node));
    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    current->data = x;
    current->link = NULL;
    ptr->link = current;
}

struct node* insertElementStart(struct node *hea, int x)
{
    struct node *ptr = hea;
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = x;
    current->link = ptr;
    return current;
}
