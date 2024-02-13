// Write a funtion to check wheater a number prime or not.
#include<stdio.h>
int main ()
{
    int x ;
    printf("Enter a number : ") ;
    scanf("%d", &x) ;

    int i ;
    for (i=2 ; i<x ; i++)
    {
        if (x%i==0)
            break ;
    }
    if (i==x)
        printf("%d is a prime number ", x) ;
    else
        printf("%d is a not prime " ,x) ;
    
}
