#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s;
    map <char, int> m;

    for(i=0;i<3;i++)
    {
        getline(cin, s);
        if(s[1] == '<') m[s[2]]++;
        else m[s[0]]++;
    }
    if(m['A'] == 1 && m['B'] == 1 && m['C'] == 1)
        cout << "Impossible" << endl;
    else
    {
        if(m['A'] == 0) cout << "A";
        else if(m['B'] == 0) cout << "B";
        else if(m['C'] == 0) cout << "C";

        if(m['A'] == 1) cout << "A";
        else if(m['B'] == 1) cout << "B";
        else if(m['C'] == 1) cout << "C";

        if(m['A'] == 2) cout << "A";
        else if(m['B'] == 2) cout << "B";
        else if(m['C'] == 2) cout << "C";
    }
    cout << endl;

    return 0;
}
