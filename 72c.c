#include <stdio.h>

void fill_array(int *ptr[], int n)
{
  int *a[1000];
  int i,j;
  int *smaller;
  for(i=0;i<n;i++)
  a[i]=ptr[i];
  for(i=0;i<n;i++)
  {
    for(j=n-2;j>=i;j--)
    {
      printf("%d\n",*ptr[j+1]);
      printf("%d\n",*ptr[j]);
      smaller=(*a[j]>*a[j+1])? a[j+1]:a[j];
      a[j+1]=(*a[j]>*a[j+1])? a[j]:a[j+1];
      a[j]=smaller;
    }
    //printf("%d\n",*a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    while(a[i+1]!=a[i]+1)
    {
      a[i]=a[i]+1;
      *a[i]=*ptr[i]+*a[i+1];
    }
  }
}

int main() {
    int arr[100] = {};
    int *ptr[100];
    int i;
    int n = 6, m = 0;
    int A[100] = {0, 5, 6, 9, 3, 12};
    for (i = 0; i < n; i++) {
        ptr[i] = &arr[A[i]];
    }
    printf("%d\n",*ptr[1]);
    //fill_array(ptr, n);
    for (i = 0; i <= m; i++)
        printf("%d%c", arr[i], " \n"[i==m]);
    return 0;
}
