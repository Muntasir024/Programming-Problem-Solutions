#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[105],b[105],c[105],temp;
    int i,j,s;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    strcat(a,b);
    int len1,len2;
    len1=strlen(a);
    len2=strlen(c);
    for (i = 0; i < len1-1; i++) {
      for (j = i+1; j < len1; j++) {
         if (a[i] > a[j]) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
   }
   for (i = 0; i < len2-1; i++) {
      for (j = i+1; j < len2; j++) {
         if (c[i] > c[j]) {
            temp = c[i];
            c[i] = c[j];
            c[j] = temp;
         }
      }
   }
   s = strcmp(a,c);
    if(s == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
