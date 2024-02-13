//Write  a function  in C to calculate LCM of two numbers.

#include<stdio.h>
int lcm (int , int ) ;
int main ()
{
    int a ,b ;
    printf("Enter two number : " );
    scanf("%d%d" , &a , &b) ;
    
    printf("LCM is %d" , lcm(a,b)) ;
    return 0 ;
}
int lcm (int a, int b)
{
    int i ;
    for (i=(a>b?a:b) ; i<=a*b ; i=i+(a>b?a:b))
        if (i%a==0 && i%b==0)
            break ;
        
    return i ;
}
