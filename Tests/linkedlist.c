#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
typedef struct node snode;
snode* create(snode *head);
void insertAtEnd(snode *head );
void show(snode *head);

void main(){
    int ch;
    snode *head ;
    head = (snode *)malloc(sizeof(snode));
    head = NULL;
    while(1){
        printf("\n1)Create \n2)InsertAtEnd\n");
        printf("Enter Choice : ");
        scanf("%d",&ch);

        switch(ch){
        case 0:
            show(head);
            break;
        case 1:
            head = create(head);
            break;
        case 2:
            insertAtEnd(head);
            break;
        default:
            exit(0);
        }
    }
}
snode* create(snode *head){
    snode *current;
    current= (snode*)malloc(sizeof(snode));
    printf("Enter element Into empty List : ");
    scanf("%d",&current->data);
    current->link = NULL;
    return current;
}
void insertAtEnd(snode *head ){
    snode *current;
    current = (snode*)malloc(sizeof(snode));
    snode *ptr;
    ptr = head;
    if(ptr == NULL){
        create(head);
        return;
    }
    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    printf("Enter Element to insert : ");
    scanf("%d",&current->data);
    current->link = NULL;
    ptr->link = current;
}
void show(snode *hea){
    if(hea == NULL){
        printf("\nList is Empty");
        return;
    }
    snode *ptr = hea;
    while(ptr!= NULL){
        printf("%d\t",ptr->data);
        ptr = ptr->link;
    }

}
