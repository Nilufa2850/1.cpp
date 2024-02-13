//WAP in C to calculate LCM of two numbers.

#include<stdio.h>
int main ()
{
    int a ,b ;
    printf("Enter two number : " );
    scanf("%d%d" , &a , &b) ;
    
    int i ;
    for (i=(a>b?a:b) ; i<=a*b ; i=i+(a>b?a:b))
        if (i%a==0 && i%b==0)
        {
            printf("LCM is %d" , i) ;
            break ;
        }

    return 0 ;
}
