#include<stdio.h>
int main(){
    int math,english,odia,science,history;
    printf("Enter the marks obtained from 100\n");
printf("math : ");
scanf("%d",&math);
printf("english : ");
scanf("%d",&english);

printf("odia : ");
scanf("%d",&odia);
printf("science : ");
scanf("%d",&science);

printf("History : ");
scanf("%d",&history);

int per = (math+english+odia+science+history)/5;
printf("You Got %d percentage\n",per);

/*show pass or fail*/
if(per>=70){
printf("You got 1st division");
}
else if(per >= 50 && per <=69){
printf("You got 2nd division");
}
else if(per >= 30 && per <= 49){
printf("You got 3rd division");
}
else {
printf("You are failed.");
}






    return 0;
}
