#include<bits/stdc++.h>
using namespace std;

int a[2000007];
int b[2000007];
vector <char > v;

int main()
{
    int n, k, i, j, m, l, c, d = 1,x2;
    string st;
    char x;
    cin >> n >> k;
    cin >> st;
    l = st.size();
    a[0] = st[0] - '0';
    v.push_back(st[0]);
    b[0] = a[0];
    for(i=1;i<k;i++) {
        a[i] = (st[i-1]-'0') ^ (st[i]-'0');
        v.push_back(a[i]+'0');
        b[i] = b[i-1] ^ a[i];
    }
    for(j=i;j<l;j++) {
        c=0;
        x2 = k+d-2;
        if(x2>=n) x2=n-1;
        if(d==0) {
            c = c ^ b[x2];
            c = c ^ b[0];
        }
        else {
            c = c ^ b[x2];
            c = c ^ b[d-1];
        }
        //for(m=d;m<x2;m++) c = c ^ a[m];
        a[j] = c ^ (st[j]-'0');
        v.push_back(a[j]+'0');
        b[j] = b[j-1] ^ a[j];
        d++;
    }

    for(i=0;i<l-k+1;i++) cout << v[i];
    cout << endl;
    return 0;
}
