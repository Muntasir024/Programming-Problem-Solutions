#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

int ispal(string s) {
    int i, n = s.size();
    for(i=0;i<n/2;i++) if(s[i]!=s[n-i-1]) return 0;

    return 1;
}

int main()
{
    string s;
    while(cin >> s) {
        int i, j, c = 0, n;
        string t;
        set <string > st;
        n = s.size();
        for(i=0;i<n;i++) {
            for(j=i;j<n;j++) {
                t = s.substr(i, j-i+1);

                if(ispal(t)) st.insert(t);
            }
        }
        cout << "The string '" << s << "' contains " << st.size() << " palindromes." << endl;
    }
    return 0;
}
