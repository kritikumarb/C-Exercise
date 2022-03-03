#include<stdio.h>
#include<conio.h>
void main(){
    /*Convert farenheit to celsius*/
    float celcius , fahrenhite;
    printf("Enter Celsius : ");
    scanf("%f",&celcius);
    fahrenhite = ((celcius*(9.0/5.0))+32);
    printf("%0.2f Celsius is %.2f Farenhiet \n",celcius,fahrenhite);

}