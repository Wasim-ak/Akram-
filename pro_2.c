#include<stdio.h>
int main()
{
    int a,b[100],c,i=0,j,k;
    printf("\nEnter the number:");
    scanf("%d",&a);
    while(a>0)
    {
        b[i]=a%10;
        a=a/10;
        i++;
    }
     for(j=0;j<i;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(b[j]>b[k])
            {
                c=b[j];
                b[j]=b[k];
                b[k]=c;
            }
        }
    }
    j=0;
    printf("%d%d",b[j],b[j+1]);
}
