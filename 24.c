#include <stdio.h>
#include <ctype.h>

int main()
{
  char s;
  int i=0;
  int d=0;
  int l=0;
  int v=0;
  int c=0;
  while(scanf("%c",&s)!=EOF)
  {
      //digits
      if(isdigit(s))
        d=d+1;
      //letters
      if(isalpha(s))
      {
        l=l+1;
        //vowels
        if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
            v=v+1;
        //consonants
        else
        c=c+1;
      }
  }
  printf("%d %d %d %d",d,l,v,c);
  return 0;
}
