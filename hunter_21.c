#include<stdio.h>
int main()
{
    int a,b,c[100][100],d[100][100],e[100][100],i,j,m=0;
    printf("\nEnter the No.of rows and columns:");
    scanf("%d%d",&a,&b);
    printf("\nEnter the Matrix with only 0's and 1's:");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            d[i][j]=e[i][j]=c[i][j];
        }
    }
    for(i=0;i<a;i++)
    {
       m=0;
    for(j=0;j<b;j++)
    {
        if(d[i][j]==0)
            m=1;
    }
    if(m==1)
        for(j=0;j<b;j++)
    {
        d[i][j]=0;
    }
    }
    for(j=0;j<b;j++)
    {
       m=0;
    for(i=0;i<a;i++)
    {
        if(e[i][j]==0)
            m=1;
    }
    if(m==1)
        for(i=0;i<b;i++)
    {
        e[i][j]=0;
    }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if((d[i][j])&&(e[i][j])==1)
                c[i][j]=1;
            else
                c[i][j]=0;
        }
    }
     printf("\n");
     for(i=0;i<a;i++)
    {
        printf("\n");
        for(j=0;j<b;j++)
        {
            printf("%d\t",c[i][j]);
        }
    }
}
