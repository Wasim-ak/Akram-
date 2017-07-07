#include<stdio.h>
int main()
{
    int a,n,b[100],c,d=0,e=0,i,j;
    printf("\nEnter the no of Elephants:");
    scanf("%d",&n);
    printf("\nEnter the Max weight:");
    scanf("%d",&a);
    printf("\nEnter the Weight of individual Elephant:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                c=b[i];
                b[i]=b[j];
                b[j]=c;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        d=b[i]+d;
        if(d>=a)
            break;
        e++;
    }
    printf("\nNo of Elephants can be included is:%d",e);
    return 0;
}