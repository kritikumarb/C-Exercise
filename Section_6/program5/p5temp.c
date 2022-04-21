#include<stdio.h>
#include<conio.h>
void main()
{ 
    int i ,j ,n , c , k;
    printf("Entetr size of array : ");
    scanf("%d",&n);
    int arr[n],freq[n];
    printf("Enter Items into array : \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //scanning complete 
    //for loop to run a check
    for(i=0;i<n;i++)
    {
        c = 1;
        //for loop to iterate all items and check if there is any same 
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
                for(k=j;k<n;k++){
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }
            
        }
        freq[i]=c;
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    printf("\n=======================");
    printf("\n\tNUMBERt\tFREQUENCY");
    for(i=0;i<n;i++){
        printf("\n\t%d\t\t%d",arr[i],freq[i]);
    }
    printf("\n=======================");
}