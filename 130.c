#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int n;
    char s1[100],s2[100],type[100];
    int i,j,k;
    int l1,l2;
    int check=0;
    int l,s;
    int num=0;
    char n1,n2;
    int r[1000];
    scanf("%d",&n);
    scanf("\n");
    for(i=0;i<n;i++)
    {
        l1=-1;
        l2=-1;
        while(s1[l1]!='\n'&&s1[l1]!=' '||l1==-1)
        {
            l1++;
            scanf("%c",&s1[l1]);
            s1[l1]=toupper(s1[l1]);
        }
        while(s2[l2]!='\n'&&s2[l2]!=' '||l2==-1)
        {
            l2++;
            scanf("%c",&s2[l2]);
            s2[l2]=toupper(s2[l2]);
        }
        l=(l1>l2)? l1:l2;
        s=(l1>l2)? l2:l1;
        check=0;
        if(l2>l1)
        {
            strcpy(type,s2);
            strcpy(s2,s1);
            strcpy(s1,type);
        }
        if(s==l)
        {
            for(k=0;k<=l;k++)
            {
                if(s1[k]!=s2[k])
                {
                   num++;
                   if(num==1)
                   {
                       n1=s1[k];
                       n2=s2[k];
                   }
                   else if(num==2)
                   {
                       if(s2[k]!=n1||s1[k]!=n2)
                        break;
                   }
                   else
                    break;
                }
                if(k==l&&num==2)
                    check=1;
            }
        }
        else if(l-s==1)
        {
            for(k=0;k<=s;k++)
            {
                if(s1[k]!=s2[k])
                {
                    if(l1>l2)
                    {
                        for(check=0;k<=s;k++)
                        {
                            if(s1[k+1]!=s2[k])
                                break;
                            if(k==s)
                                check=1;
                        }
                    }
                    else if(l2>l1)
                    {
                        for(check=0;k<=s;k++)
                        {
                            if(s2[k]!=s1[k+1])
                                break;
                            if(k==s)
                                check=1;
                        }
                    }
                }
            }
        }
        if(check==1)
            r[i]=1;
        else if(check==0)
            r[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(r[i]==1)
        printf("yes");
        else if(r[i]==0)
        printf("no");
        if(i!=n-1)
        printf("\n");
    }
    return 0;
}
