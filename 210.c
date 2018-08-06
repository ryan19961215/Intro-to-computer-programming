#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char lastname[80];
    char firstname[80];
    char ID[80];
    int salary;
    int age;
}yee;

int main()
{
    int n;
    yee y[50];
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%s",y[i].lastname);
       scanf("%s",y[i].firstname);
       scanf("%s",y[i].ID);
       scanf("%d",y[i].salary);
       scanf("%d",y[i].age);
    }
    int m,j;
    int a[100];
    char s[80];
    for(i=0;i<m;i++)
    {
        j=0;
        while(strcmp((scanf("%s",s[80])),"where")!=0)
        {
            if(strcmp(s,"lastname"))
                a[j]=1;
            else if(strcmp(s,"firstname"))
                a[j]=2;
            else if(strcmp(s,"ID"))
                a[j]=3;
            else if(strcmp(s,"salary"))
                a[j]=4;
            else if(strcmp(s,"lastname"))
                a[j]=5;
            j++;
        }
        scanf("%s",s[80]);
        if(strcmp(s,"lastname"))
    }
    return 0;
}
