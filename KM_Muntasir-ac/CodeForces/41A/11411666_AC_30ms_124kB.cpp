#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str1[1001],str2[1001];
    int i,j,len,cnt=0;
    gets(str1);
    gets(str2);
    len=strlen(str1);
    for(i=0,j=len-1;str1[i];i++,j--) {
        if(str1[i]==str2[j])
            cnt++;
    }
    if(cnt==len)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
