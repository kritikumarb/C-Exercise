#include<stdio.h>
#include<conio.h>
int main(){
    float celsius,farenhite;
    /*Convert celsius to fahrenheit*/
    printf("Enter Farenhiet: ");
    scanf("%f",&farenhite);
    celsius = (5.0/9.0)*(farenhite-32);
    printf("%0.2f Farenhiet is %.2f  Celsius \n",farenhite,celsius);

    return 0;
}
