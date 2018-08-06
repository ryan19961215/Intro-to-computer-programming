#include <stdio.h>

int main()
{
    int a;
    int i,k;
    int number;
    int memory=0;
    while(scanf("%d",&a)!=EOF)
    {
        number=0;
        memory=0;
        for(i=1,k=0;k<32;i=2*i,k++)
        {
            if(a&i)
                number+=1;
            else
            {
                memory=(number>memory)? number:memory;
                number=0;
            }

        }
        printf("%d\n",memory);
    }
    return 0;
}
