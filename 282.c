#include <stdio.h>

int main()
{
    long long int a;
    long long int i,k;
    int number;
    while(scanf("%lld",&a)!=EOF)
    {
        number=0;
        for(i=1,k=0;k<64;i=2*i,k++)
        {
            if(a&i)
                number+=1;
        }
        printf("%d\n",number);
    }
    return 0;
}
