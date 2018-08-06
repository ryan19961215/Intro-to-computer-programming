#include<stdio.h>

int main()
{
  int a[26]={0};
  char n;
  int i;
  while(scanf("%c",&n)!=EOF)
  {
      for(i=0;i<26;i++)
      {
        if(n==i+65)
            a[i]=a[i]+1;
        if(n==i+97)
            a[i]=a[i]+1;
      }
  }
  for(i=0;i<26;i++)
    printf("%d\n",a[i]);
  return 0;
}
