#include<stdio.h>
int main()
{
    int a,b,c[100],d[100],i=1,j=1;
    printf("\nEnter two numbers:");
    scanf("%d%d",&a,&b);
    for(i=1;i<100;i++)
    {
        c[i]=a*i;
    }
    for(j=1;j<100;j++)
    {
        d[j]=b*j;
    }
    for(i=1;i<=100;i++)
    {
        for(j=1;j<=100;j++)
        {
            if(c[i]==d[j])
            {
                printf("The LCM of %d and %d is %d",a,b,c[i]);
            goto end;
            }
        }
    }
    end:
    return 0;
}
