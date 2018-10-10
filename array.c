#include<stdio.h>
int main()
{
    int i,n,j=1;

    printf("enter the no. of students\n");
    scanf("%d",&n);

    int marks[n];
     for(i=0;i<=(n-1);i++)
     {
         printf("enter the marks of student%d\n",j);
         scanf("%d",&marks[i]);
         j++;
     }
       j=1;
     for(i=0;i<=(n-1);i++)
     {
         printf("STUDENT%d MARKS IS %d\n",j,marks[i]);
         j++;
     }



}
