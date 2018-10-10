#include<stdio.h>
int add(intx,inty);
int sub(intx,inty);
int mul(intx,inty);
int div(intx,inty);
int fact(int x);
int permu(int x);
int main()
{
    int i,a,b,sum,diff,cross,dvd,facto,n,r,permut,d;
    printf("WELCOME TO TANNY CALCULATOR.....\n");
    printf("FOR ADDITION ENTER 1..\n");
    printf("FOR SUBSTRACTION ENTER 2..\n");
    printf("FOR MULTIPLLICATION ENTER 3..\n");
    printf("FOR MULTIPLICATION ENTER 4..\n");
    printf("FOR FACTORIAL ENTER 5..\n");
    printf("FOR PERMUTATION ENTER 6..\n");

    printf("ENTER A NUMBER ACCORDING TO YOUR JOB\n");
    scanf("%d",&i);


    if(i==1)
   {
       printf("enter a and b\n");
    scanf("%d%d",&a,&b);
     sum=add(a,b);
       printf("sum=%d",sum);
   }

    if(i==2)
    {
        printf("enter a and b\n");
    scanf("%d%d",&a,&b);
      diff=sub(a,b);
       printf("diff= %d",diff);
    }

    if(i==3)
    {
        printf("enter a and b\n");
    scanf("%d%d",&a,&b);
       cross=mul(a,b);
        printf("cross=%d",cross);
    }

    if(i==4)
    {
        printf("enter a and b\n");
    scanf("%d%d",&a,&b);
       dvd=(a,b);
       printf("dvd=%d",dvd);
    }

    if(i==5)
    {
        printf("enter a\n");
    scanf("%d",&a);
        facto=fact(a);
        printf("factorial is %d",facto);
    }
    if(i==6)
    {
        count:
        printf("enter value of n and r respectively...such that n is greater than r\n");
        scanf("%d%d",&n,&r);
        if(r>n)
        goto count;
        d=n-r;
        n=fact(n);
        r=fact(r);
        d=fact(d);
        permut= n/(r*d);
        printf("permutation is %d",permut);


    }
    return 0;
}

    int add(int x, int y)
    {
        int sum;
        sum=x+y;
        return sum;
    }

    int sub(int x, int y)
    {
        int diff;
        if(x>y)
        {
            diff=x-y;
        }

        else
        {
            diff=y-x;
        }
        return diff;
    }

        int mul(int x, int y)
    {
        int cross;
        cross=x*y;
        return cross;
    }

     int div(int x, int y)
    {
        int dvd;
        if(x>y)
        {
            dvd=x/y;
        }

        else
        {
            dvd=y/x;
        }
        return dvd;
    }
        int fact(int x)
        {
             int n,i,f=1;
             for(i=x; i>=1 ; i--)
            {
            f=f*i;
            }
            return f;
        }


