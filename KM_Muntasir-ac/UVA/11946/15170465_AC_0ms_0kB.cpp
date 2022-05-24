#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, j;
    string s;
    cin>>t;
    cin.ignore();
    for(j = 1; j <= t; j++)
    {
        while(getline(cin, s))
        {
            if(s == "")
                break;
            n = s.size();
            for(i=0;i<n;i++)
            {
                if(s[i] == '1') s[i] = 'I';
                else if(s[i] == '2') s[i] = 'Z';
                else if(s[i] == '3') s[i] = 'E';
                else if(s[i] == '4') s[i] = 'A';
                else if(s[i] == '5') s[i] = 'S';
                else if(s[i] == '6') s[i] = 'G';
                else if(s[i] == '7') s[i] = 'T';
                else if(s[i] == '8') s[i] = 'B';
                else if(s[i] == '9') s[i] = 'P';
                else if(s[i] == '0') s[i] = 'O';
            }
            cout << s << endl;
        }
        if(t > j) cout << endl;
    }
    return 0;
}
