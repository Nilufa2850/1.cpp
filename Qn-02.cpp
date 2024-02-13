//WAP in C to calculate factorial of a number.

#include<stdio.h>
int main ()
{
    int x ;
    int product = 1 ;
    printf("Enter a number for factorial : ") ;
    scanf("%d" , &x) ;

    for (int i=x ; i>1 ; i--)
        product = product*i ;

    printf("Factorial of %d is %d" , x , product) ;
    return 0 ;
}
