#include<stdio.h>
int main()
{
    factorial();
    return 0;
}
 factorial()
 {
      long int n,i,f=1;
    printf("enter a number..");
    scanf("%ld",&n);
    for(i=n ; i>=1 ; i--)
    {
        f=f*i;
    }
    printf("factorial of %ld is %ld",n,f);
 }
