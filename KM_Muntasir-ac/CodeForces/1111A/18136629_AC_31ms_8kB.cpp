#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, x, y;
    string a, b;
    cin >> a;
    cin >> b;
    x = a.size();
    y = b.size();
    for(i=0; i<x; i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') a[i]='a';
        else a[i]='b';
    }
    for(i=0; i<y; i++)
    {
        if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u') b[i]='a';
        else b[i]='b';
    }
    if(a==b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    //main();
    return 0;
}
