#include<stdio.h>
#include<conio.h>
void main(){
	int year;
	printf("Enter Year : ");
	scanf("%d",&year);
	if(leapYearCheck(year)){
		printf("%d is a leap Year.",year);
	}
	else{
		printf("%d is not a leap Year.",year);
	}
}
int leapYearCheck(int year){
	if(year % 4 == 0){
		if(year % 100 == 0){
			return 0;
		}
		else{
			return 1;
		}
	}
	else{
		return 0;
	}
}