#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c[100]={0};
    char b[100][100]={{0}};
    char a;
    int max,min;
    int i,j,k;
    int e;
    int m[100];
    for(i=0,e=0;scanf("%c",&a)!=EOF;i++)
    {
        c[i]=a;
        if(a=='\n')
        {
            min=-1;
            max=i;
            for(j=i-1;c[j]==' ';j--)
                max=j;
            for(i=0;c[i]==' ';i++)
                min=i;
            for(k=min+1,i=0;k<max;k++,i++)
                b[e][i]=c[k];
            m[e]=i;
            for(i=0;i<100;i++)
               c[i]=0;
            i=-1;
            e++;
        }
    }
    for(i=0;i<e;i++)
    {
        for(j=0;j<m[i];j++)
            printf("%c",b[i][j]);
        printf("\n");
    }
    return 0;
}
