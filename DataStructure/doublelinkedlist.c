#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node {
    int info;
    struct node *next;
    struct node *prev;
}snode;

void insertElementEnd(struct node *hea , int x);
snode* insertElementStart(struct node *hea , int x);
void insertAtAnyPoint(snode *hea , int x);
void showList(struct node *hea);
void main()
{
    int c=1,k,n;
    snode *head = (snode *)malloc(sizeof(snode));
    head->prev = NULL;
    printf("Enter first node next : ");
    scanf("%d",&head->info);
    head->next = NULL;
     while(c){
    printf("\n\nEnter Your Choice : \n");
    printf("1)Show All Elements  \n");
    printf("2)Insert At Start  \n");
    printf("3)Insert at End  \n");
    printf("4)Insert At Any Point\n");
    printf("5)End Of Loop \n");
    scanf("%d",&k);
    switch(k){
        case 1:
            showList(head);
            break;
        case 2:
            printf("Enter Number(END) : ");
            scanf("%d",&n);
            head = insertElementStart(head , n);
            break;
        case 3:
            printf("Enter Number(END) : ");
            scanf("%d",&n);
            insertElementEnd(head , n);
            break;
        case 4:
            printf("Enter The previous location of Insertion : ");
            scanf("%d",&n);
            insertAtAnyPoint(head , n);
            break;
        default:
            free(head);
            exit(0);
        }
    }
    getch();
}
void insertElementEnd(struct node *hea , int x){
    struct node *ptr1 = hea;
    struct node *current = (struct node *)malloc(sizeof(struct node));
    while(ptr1->next != NULL){
        ptr1 = ptr1->next;
    }
    current->info = x;
    ptr1->next = current;
    current->prev = ptr1;
    current->next = NULL;
}

snode* insertElementStart(struct node *hea , int x){
    snode *ptr1=hea;
    snode *current=(snode *)malloc(sizeof(snode));
    current->next= ptr1;
    current->prev = NULL;
    current->info = x;
    ptr1->prev = current;
    return current;
}
void showList(snode *hea){
    snode *ptr1 = hea;
    while(ptr1 != NULL){
        printf("%d\t",ptr1->info);
        ptr1 = ptr1->next;
    }
}

void insertAtAnyPoint(snode *hea , int x){
    int n;
    printf("Enter The value after %d : ");
    scanf("%d",&n);
    if(hea->next == NULL && hea->info == x){
        insertElementEnd(hea , n);
        return;
    }
    snode *ptr1 = hea;
    snode *ptr2 = ptr1->next;
    snode *current = (snode *)malloc(sizeof(snode));


    while(ptr1->info != x && ptr1->next != NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr1->next;
    }
    current->info = n;
    current->prev = ptr1;
    ptr1->next = current;
    current->next= ptr2;
    ptr2->prev = current;

}
