#include<stdio.h>
int main()
{
    int a[50][50],b=0,i,j,l=0,m,n,o;
    printf("Enter the Rows and Columns:");
    scanf("%d%d",&m,&n);
    printf("\nEnter the Matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    o=(m+n)-2;
    i=0;j=0;
    b=a[i][j];
    while(l<=o)
    {
        if((a[i+1][j])>(a[i][j+1]))
        {
            b=b+a[i+1][j];
            i++;
        }
        if((a[i][j+1])>(a[i+1][j]))
        {
            b=b+a[i][j+1];
            j++;
        }
        l++;
    }
    printf("\nThe Maximal value of gift form the board is:%d",b);
}
