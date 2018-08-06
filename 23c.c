#include <stdio.h>

int max(int *iptr[], int n)
{
  int i;
  int ma=*iptr[0];
  //printf("%d",*iptr[1]);
  for(i=0;i<n;i++)
  {
    if(iptr+i>ma)
    ma=iptr+i;
    //printf("%d\n",ma);
  }
  return ma;
}

int main() {
    int n, i;
    int array[100];
    int *iptr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &(array[(i + 3) % n]));
        iptr[i] = &(array[(i + 3) % n]);
    }
    printf("%d\n", max(iptr, n));
    return 0;
}
