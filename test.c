#include<stdio.h>
// void change(int arr[]){
//     arr[0]=20;
    
// }
void main(){

  int marks[10]={1,2,3,4,5};
  int b = &marks;
//   change(marks);
  printf("%d",b[0]);


}