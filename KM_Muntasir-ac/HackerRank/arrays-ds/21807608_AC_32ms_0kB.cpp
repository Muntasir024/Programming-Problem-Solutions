#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, i, j;
  scanf("%d", &n);
  int a[n+2], b[n+2];
  for(i=0;i<n;i++) scanf("%d", &a[i]);
  for(j=0,i=n-1;j<n;i--,j++)
  {
    b[j]=a[i];
  }
  printf("%d", b[0]);
  for(i=1;i<n;i++) printf(" %d", b[i]);
    return 0;
}
