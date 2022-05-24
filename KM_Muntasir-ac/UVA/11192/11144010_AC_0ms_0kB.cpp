#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[1000];
    int n,len,i,j,p,s;
    scanf("%d",&n);

    while (n)
    {
        cin>>str;

        len = strlen(str);
        s = len / n;
        for (i = 0; i < len; i=i+s)
        {

            for (j = i, p = i+s-1; j < p; ++j, --p)
            {
                char temp(str[j]);
                str[j] = str[p];
                str[p] = temp;
            }
        }
        cout << str << '\n';
        scanf("%d",&n);
    }

    return 0;
}
