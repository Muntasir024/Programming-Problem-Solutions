#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n, t, d, a[] = {16, 56, 96, 36, 76};
    cin >> t;
    cin.ignore();
    while(t--)
    {
        cin >> s;
        d = s.size() - 1;
        if(d == 0)
        {
            if(s[d] == '0') cout << "1" << endl;
            else if(s[d] == '1') cout << "66" << endl;
            else
            {
                n = s[d] - '0';
                n--;
                cout << a[n%5] << endl;
            }
        }
        else
        {
            if(s[d] == '0' && s[d-1] == '0') cout << "76" << endl;
            else
            {
                n = ((s[d-1] - '0')*10) + s[d] - '0';
                n--;
                cout << a[n%5] << endl;
            }
        }
    }
    return 0;
}


