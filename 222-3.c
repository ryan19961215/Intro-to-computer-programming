#include <stdio.h>

int a[10000000]={0};
int main()
{
    int i=0;
    while(scanf("%d",&a[i])!=EOF)
     i++;
    int j,k,l;
    int b[8]={0};
    for(j=7;(i>=0&&j>=0);j--,i--)
    {
        l=0;
        for(k=7;k>j;k--)
        {
            if(a[i-1]==b[k])
            {
                l=1;
                j++;
            }
        }
        if(l==0)
            b[j]=a[i-1];
    }
    for(i=0;i<=j;i++)
    b[i]=0;
    for(i=0;i<8;i++)
    {
        printf("%d",b[i]);
        if(i!=7)
            printf(" ");
    }
    return 0;
}
