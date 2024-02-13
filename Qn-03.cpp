//WAP in C to swap values of two int variables.

#include<stdio.h>
int main ()
{
    int a ,b ;
    printf("Enter two data : " );
    scanf("%d%d" , &a , &b) ;
    printf("a=%d b=%d" , a,b) ;

    a = a+b ;
    b = a-b ;
    a = a-b ;
    printf("\na=%d b=%d" , a,b) ;

    /*
    int c ;
    c = a+b ;
    a = c-a ;
    b = c-a ;
    printf("\na=%d b=%d",a,b) ;
    */

    /*
    int c ;
    c = a ;
    a = b ;
    b = c ;
    printf("\na=%d b=%d" , a,b) ;
    */

    return 0 ;
}
