#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    int i,len,cnt=0;
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++) {
        if(str[i]=='4' || str[i]=='7')
            cnt++;
    }
    if(cnt==4 || cnt==7)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
