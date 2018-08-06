#include <stdio.h>

void shuffle(int *deck[])
{
  int i=0;
  while(deck[i]!=NULL)
  i++;
  int m;
  int j;
  int *a[10000];
  for(j=0;j<i;j++)
  {
    if(j%2==0)
    a[j]=deck[j/2];
    else if(j%2==1)
    a[j]=deck[(i+1)/2+j/2];
  }
  for(j=0;j<i;j++)
  deck[j]=a[j];
}

void print(int *deck[])
{
  int i=0;
  while(deck[i]!=NULL)
  i++;
  int j;
  for(j=0;j<i-1;j++)
  printf("%d ",*deck[j]);
  if(i>0)
  printf("%d",*deck[i-1]);
}

