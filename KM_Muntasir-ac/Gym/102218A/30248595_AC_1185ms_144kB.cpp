#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, i, j;
    char ch;
    map <char, int> mp;
    scanf("%d", &n);
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%c", &ch);
        mp[ch]++;
    }
    for(i='a';i<='z';i++)
    {
        for(j=1;j<=mp[i];j++)
        {
            printf("%c", i);
        }
    }
    printf("\n");
}
