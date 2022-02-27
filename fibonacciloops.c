#include <stdio.h>

int main()
{
    int x,i=0,j=1,k;
    printf("enter a number : ");
    scanf("%d",&x);
    printf("\n");
    for(int a=1;a<=x;a++)
    {
     printf("%d ",i);

     k=i+j;
     i=j;
     j=k;

    }
}


