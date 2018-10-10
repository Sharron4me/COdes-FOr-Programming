#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("Hello Print..!!\n");

    printf("enter Values of A and B\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("summation of above number is %d\n",c);
    printf("\n");

    printf("enter values of D and E\n");
    scanf("%d%d",&d,&e);
    printf("the input numbers are %d and %d\n",d,e);
    printf("\n");

    printf("enter values of F and G\n");
    scanf("%d%d",&f,&g);
    if(f>g)
    {
        printf("%d is greater than %d\n",f,g);
    }
    else
    {
        printf("%d is greater than %d\n",g,f);
    }

    return 0;
}
