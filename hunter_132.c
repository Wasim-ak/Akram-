#include<stdio.h>
int main()
{
    int a,b,i,j,k;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("*");
        }
        printf(" ");
        for(k=0;k<b;k++)
        {
            printf("*");
        }
        printf("\n");
        b--;
    }
    return 0;
}
