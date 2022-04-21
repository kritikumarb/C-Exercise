#include <stdio.h>
int arrA[50];
int arrB[50];
int arrC[50];
int ins;
//function for cdreating and add items into array
void addItems(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void traverse(int arr[], int len, char *c)
{
    printf("\nElements in %s are : ", c);
    for (int i = 0; i < len; i++)
    {
        printf("%d    ", arr[i]);
    }
}
int insert(int arr[], int len, char *c, int ins)
{
    int temp;
    printf("\nEnter the item you want to insert at %d location: ", ins + 1);
    scanf("%d", &temp);
    for (int i = len; i >= ins; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[ins] = temp;
    return 0;
}
int delete (int arr[], int len, int ins)
{
    len = len + 1;
    for (int i = ins; i < len; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int search(char ch, int arr[], int len)
{
    int ins;
    printf("\nEnter the item you want to search in %c : ", ch);
    scanf("%d", &ins);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == ins)
        {
            printf("\nNumber %d is present at %d location . ", ins, i + 1);
            return 0;
        }
    }
    printf("\nNo nummber found in the array");
}
void sort(int arr[], int len)
{
    int temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[j] > arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
void merge(int arr[], int lenA, int lenB)
{
    int c = lenA + lenB;
    for (int i = 0; i < c; i++)
    {
        if (i < lenA)
        {
            arr[i] = arrA[i];
        }
        if (i >= lenA && i < c)
        {
            arr[i] = arrB[i - lenA];
        }
    }
    printf("\n\nAfter Merge Array C is : ");
    for (int i = 0; i < c; i++)
    {
        printf("  %d  ", arrC[i]);
    }
}

void main()
{
    int lenA, lenB, userInput;
    printf("Enter length of A : ");
    scanf("%d", &lenA);
    printf("Enter length of B : ");
    scanf("%d", &lenB);

    printf("Enter Items into array A : \n");
    addItems(arrA, lenA);
    printf("Enter Items into array B : \n");
    addItems(arrB, lenB);

    while (1)
    {
        printf("\n1)Traverse A    ||    2) Travese B ");
        printf("\n3)insert A      ||    4)insert B");
        printf("\n5)DeleteItems A ||    6)DeleteItems B");
        printf("\n7)search in A   ||    8)search in B");
        printf("\n9)sort A        ||    10)sort B");
        printf("\n11)Merge Both Array A and Array B");
        printf("\n\nEnter the function : ");
        scanf("%d", &userInput);
        switch (userInput)
        {
        case 1:
            traverse(arrA, lenA, "A");
            break;
        case 2:
            traverse(arrB, lenB, "B");
            break;
        case 3:
            lenA++;
            printf("\nEnter location of the insertion in : ");
            scanf("%d", &ins);
            ins--;
            if (ins < 0 || ins > lenA)
            {
                printf("\nYou have entered the wrong location. ");
                lenA--;
                break;
            }

            insert(arrA, lenA, "A", ins);
            break;
        case 4:
            lenB++;
            printf("\nEnter location of the insertion in : ");
            scanf("%d", &ins);
            ins--;
            if (ins < 0 || ins > lenB)
            {
                printf("\nYou have entered the wrong location. ");
                lenB--;
                break;
            }
            insert(arrB, lenB, "B", ins);
            break;

        case 5:
            lenA--;
            printf("Enter the location of deletion : ");
            scanf("%d", &ins);
            ins--;
            if (ins < 0 || ins > lenA)
            {
                printf("\nYou have entered the wrong location. ");
                lenA++;
                break;
            }
            delete (arrA, lenA, ins);
            break;
        case 6:
            lenB--;
            printf("Enter the location of deletion : ");
            scanf("%d", &ins);
            ins--;
            if (ins < 0 || ins > lenA)
            {
                printf("\nYou have entered the wrong location. ");
                lenB++;
                break;
            }
            delete (arrA, lenA, ins);
            break;
        case 7:
            search('A', arrA, lenA);
            break;
        case 8:
            search('B', arrB, lenB);
            break;
        case 9:
            sort(arrA, lenA);
            break;
        case 10:
            sort(arrB, lenB);
            break;
        case 11:
            merge(arrC, lenA, lenB);
            break;
        default:
            printf("Enter a valid Choice.");
            return;
        }
    }
}