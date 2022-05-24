#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5], i, n;
    string s[5];
    cin>>s[0]>>s[1]>>s[2];
    a[0]=s[0][0]-'0';
    a[1]=s[1][0]-'0';
    a[2]=s[2][0]-'0';
    sort(a, a+3);
    if(s[0][1]==s[1][1] && s[1][1]==s[2][1])
    {
        if(a[0]==a[1] && a[1]==a[2])
            cout<< "0" <<endl;
        else if(a[0]==a[1] | a[1]==a[2] | a[0]==a[2])
            cout<< "1" <<endl;
        else if(a[1]==a[0]+1 && a[2]==a[1]+1)
            cout<< "0" <<endl;
        else if(a[1]==a[0]+1 | a[2]==a[1]+1 | a[1]==a[0]+2)
            cout<< "1" <<endl;
        else cout<< "2" <<endl;
    }
    else if(s[0][1]==s[1][1] | s[1][1]==s[2][1] | s[0][1]==s[2][1])
    {
        if(s[0][1]==s[1][1])
        {
            if(s[0][0]==s[1][0] | s[0][0]==s[1][0]+1 | s[0][0]+1==s[1][0] | s[0][0]==s[1][0]+2 | s[0][0]+2==s[1][0])
                cout<< "1" <<endl;
            else
                cout<< "2" <<endl;
        }
        else if(s[1][1]==s[2][1])
        {
            if(s[1][0]==s[2][0] | s[1][0]==s[2][0]+1 | s[1][0]+1==s[2][0] | s[1][0]==s[2][0]+2 | s[1][0]+2==s[2][0])
                cout<< "1" <<endl;
            else
                cout<< "2" <<endl;
        }
        else if(s[0][1]==s[2][1])
        {
            if(s[0][0]==s[2][0] | s[0][0]==s[2][0]+1 | s[0][0]+1==s[2][0] | s[0][0]==s[2][0]+2 | s[0][0]+2==s[2][0])
                cout<< "1" <<endl;
            else
                cout<< "2" <<endl;
        }
    }
    else cout<< "2" <<endl;
    return 0;
}
