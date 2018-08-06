#include <stdio.h>
#include <ctype.h>

int main()
{
    char a;
    int b;
    int c[1000];
    int z=1;
    int i;
    int odd,even;
    while(z==1)
    {
       scanf("%c",&a);
       if(ispunct(a))
        break;
       else if(isdigit(a))
       {
           even=0;
           b=a;
           c[0]=b-48;
           odd=c[0];
           //printf("%d\n",c[0]);
           i=1;
           while(z==1)
           {
               scanf("%c",&a);
               if(iscntrl(a))
                break;
               else
               {
                c[i]=a-48;
                //printf("%d ",c[i]);
                if(i%2==0)
                  odd=c[i]+odd;
                else
                  even=c[i]+even;
                i++;
               }
           }
            if(c[i-1]%2==0)
            printf("yes ");
            else
            printf("no ");
            if((even+odd)%3==0)
            printf("yes ");
            else
            printf("no ");
            if(c[i-1]%5==0)
            printf("yes ");
            else
            printf("no ");
            if((even-odd)%11==0)
            printf("yes");
            else
            printf("no");
            printf("\n");

       }
    }
}
