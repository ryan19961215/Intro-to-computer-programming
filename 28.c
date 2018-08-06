#include <stdio.h>

int plus(int i)
{
    int sum;
    if(i==1)
    {
        return 1;
    }
    sum=plus(i-1)+i*i;
    return sum;
}

int main()
{
    int i,sum;
    scanf("%d",&i);
    sum=plus(i);
    printf("%d",sum);
    return 0;
}
