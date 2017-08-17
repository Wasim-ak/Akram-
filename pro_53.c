#include<stdio.h>
#include<string.h>
int main()
{
    int b,i,j,k=0,l,n=0;
    char a[100],c,d;
    printf("\nEnter a String:");
    scanf("%[^'\n']s",&a);
    b=strlen(a);
    for(i=97,l=65;i<123,l<91;i++,l++)
    {
        k=0;
        c=i;
        d=l;
        for(j=0;j<b;j++)
        {
            if(c==a[j]||d==a[j])
            {
                k++;
            }

        }
        if(k<1)
        {
            printf("\n'%s' is not a Pangram",a);
            break;
        }
        else
            n++;
    }
    if(n==26)
    {
        printf("\n'%s' is a Pangram",a);
    }
}
