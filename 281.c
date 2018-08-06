#include <stdio.h>

int main()
{
    int a;
    int i,k;
    int number;
    while(scanf("%d",&a)!=EOF)
    {
        number=0;
        for(i=1,k=0;k<32;i=2*i,k++)
        {
            if(a&i)
                number+=1;
        }
        printf("%d\n",number);
    }
    return 0;
}
