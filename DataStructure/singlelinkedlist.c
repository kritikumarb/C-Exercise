#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};
void searchElement(struct node * , int);
void insertElementEnd(struct node *, int);
struct node* insertElementStart(struct node *, int);
void insertMid(struct node * , int , int);
void showList(struct node *);
struct node* deleteFirst(struct node *);
void deleteLast(struct node *p);
void deleteMid(struct node *hea , int x);
void sort(struct node *);
void main(){
    int n,k,c=1;
    struct node *head = (struct node *)malloc(sizeof(struct  node));
    printf("Enter First node : ");
    scanf("%d",&head->data);

    head->link = NULL;


    while(c==1){
    printf("\n\nEnter Your Choice : \n");
    printf("1)Show All Elements  \n");
    printf("2)Insert At Start  \n");
    printf("3)Insert at End  \n");
    printf("4)Search The Element   \n");
    printf("5)Insert at Intermediate Position \n");
    printf("6)Delete First Node\n");
    printf("7)Delete Last Element\n");
    printf("8)Delete Intermediate Element\n");
    printf("9)Sort the Nodes\n");
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
    case 4:
        printf("Enter Element to search : ");
        scanf("%d",&n);
        searchElement(head , n);
        break;
    case 5:
        int x;
        printf("Enter Element location : ");
        scanf("%d",&n);
        printf("Enter the element : ");
        scanf("%d",&x);
        insertMid(head , n , x);
        break;
    case 6:
        head = deleteFirst(head);
        break;
    case 7:
        deleteLast(head);
        break;
    case 8:
        printf("Enter The Delete Location : ");
        scanf("%d",&n);
        deleteMid(head , n);
        break;
    case 9:
        printf("Sorting the nodes ...\n\n");
        sort(head);
        break;
    default:
        c=0;
    }
    }
    getch();
}

struct node* deleteFirst(struct node *hea){
    return hea->link;
}
void sort(struct node *hea){
    struct node *p = hea;
    struct node *i,*j;
    for(i=p;i!=NULL;i=i->link){
        for(j=i->link;j!=NULL;j=j->link){
            if(i->data > j->data){
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}
void insertMid(struct node *hea , int mid , int x){
    struct node *ptr = hea;
    struct node *ptr1 = hea;
    struct node *ptr2 = ptr->link;
    struct node *current = (struct node *)malloc(sizeof(struct node));
    if(ptr->link == NULL&& ptr->data == mid){
        insertElementEnd(hea , x);
        return;
    }
    current->data = x;
    while(ptr2->link != NULL && ptr1->data != mid){
        ptr1 = ptr1->link;
        ptr2 = ptr2->link;

    }
    current->link = ptr2;
    ptr1->link = current;


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

void searchElement(struct node *p , int x){
    struct node *ptr = p;
    while(ptr->link != NULL ){
        if(ptr->link->data == x){
            printf("Founded at location between : %d & %d",ptr->data,ptr->link->link->data);
            break;
        }

        ptr = ptr->link;
    }
}
void deleteLast(struct node *p){
    struct node *ptr = p;
    struct node *ptr2 = ptr->link;
    while(ptr2->link!=NULL){
        ptr = ptr->link;
        ptr2 = ptr->link;
    }
    ptr->link = NULL;
}
void deleteMid(struct node *hea , int x){

    struct node *ptr1 = hea;
    struct node *ptr2 = ptr1->link;
    while(ptr2!= NULL){
        if(ptr2->data == x){
            ptr1->link = ptr2->link;
                break;
        }
        ptr1 = ptr1->link;
        ptr2 = ptr2->link;
    }


}
