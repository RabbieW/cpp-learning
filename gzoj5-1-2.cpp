#include<stdio.h>
int main()
{
    int n;
    for( n=2; n<1000; n++ )
    {
       if( n <=10 && n*n%10 == n ) printf("%ld ", n);
       if( n > 10 && n <= 100 && n*n%100 == n) printf("%ld ",n);
       if( n > 100 && n < 1000 && n*n%1000 == n) printf("%ld ",n);
    }
    printf("\n");
    return 0;
}
