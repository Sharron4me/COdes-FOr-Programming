#include<stdio.h>
int main()
{
    int m[5],p,n,i;
    printf("enter 5 elements\n");
    for(i=0;i<5;i++)
        scanf("%d",&m[i]);

    printf("the elements entered are\n");
    for(i=0;i<5;i++)
    {
        if(i!=4)
        printf("%d      ",m[i]);
        else
            printf("%d     \n ",m[i]);
    }
    printf("enter a new no. to be inserted\n");
    scanf("%d",&n);
    printf("enter position of the new element\n");
    scanf("%d",&p);

    m[p-1]=n;

    printf("the new list is\n");
   for(i=0;i<5;i++)
    {
        if(i!=4)
        printf("%d      ",m[i]);
        else
            printf("%d     \n ",m[i]);
    }

    printf("%d",m[-1]);

}
