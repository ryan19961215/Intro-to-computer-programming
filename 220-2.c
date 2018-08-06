#include <stdio.h>

int main()
{
    char a1,a2,a3;
    int s=0;
    scanf("%c",&a1);
    scanf("%c",&a2);
    while(scanf("%c",&a3)!=EOF)
    {
        if(a1=='.'&&a2==' '&&a3==' ')
            s=s+1;
        else if(a2=='.'&&a3=='\n')
            s=s+1;
        a1=a2;
        a2=a3;
    }
    if((a1=='.'&&a2!='\n')||a2=='.')
        s=s+1;
    printf("%d",s);
    return 0;
}
