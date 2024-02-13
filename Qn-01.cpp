//WAP to check wheather a given number is an even or odd.
#include<stdio.h>
int main ()
{
    int x ;
    printf("Enter a number : ") ;
    scanf("%d" , &x) ;

    /*
    if (x%2==0)     
        printf("%d Number is even" , x) ;
    else
        printf("%d number is odd" , x) ;
    */

    /*
    if (x%2)     
        printf("%d Number is odd" , x) ;
    else
        printf("%d number is even" , x) ;
    */

    if (x&1)     
        printf("%d Number is odd" , x) ;
    else
        printf("%d number is even" , x) ;


    return 0 ;
}
