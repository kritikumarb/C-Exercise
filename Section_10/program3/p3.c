#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int a){
    if(a==1){
        return 1;
    }
    else{
        return (a*fact(a-1));
    }
}
float ans(int x , int n , int c , int k/*c is for count*/){
    /*k = max lngth 
      c = count for the power 
      n = */
    printf("%d / %d! ");
    if(c>=k){
        if(n%2==0)
            return (-1*pow(x,n)/fact(n));
        return (pow(x,n)/fact(n));
    }
    else if(c%2==0){
        printf(" - ");
        return ((-1*pow(x,c)/fact(c))+ans(x , n , c+2 , k) );
    }
    else if(c%2==1){
        printf(" + ");
        return ((pow(x,c))/fact(c) + ans(x , n , c+2 , k));
    }
}
void main(){

}
