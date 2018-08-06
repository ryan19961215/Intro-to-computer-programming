#include <stdio.h>

char z[1000000];

int main()
{
    int a,b;
    char I,O;
    unsigned int s[1024];
    scanf("%d%d",&a,&b);
    scanf("\n");
    scanf("%c %c",&I,&O);
    int m=a*b;
    int t=m/32;
    int i,j;
    int q=0;
    unsigned int k;
    for(i=0;i<=t;i++)
        scanf("%d",&s[i]);
    for(i=0,j=1,k=2147483648;j<=a*b;j++,k=k/2)
    {
       if(q==1)
       {
           q=0;
           k=2147483648;
       }
       if(s[i]>=k)
        {
            printf("%c",I);
            s[i]=s[i]-k;
        }
       else
        printf("%c",O);
       if(j%a==0)
        printf("\n");
       if(k==1)
       {
           i++;
           k=2147483648;
           q=1;
       }
    }
    return 0;
}
