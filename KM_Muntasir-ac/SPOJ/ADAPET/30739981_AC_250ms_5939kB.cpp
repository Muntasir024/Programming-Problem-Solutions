#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;
 
string st;
int pi[1000001];
 
void calcPI()
{
	int n = st.size();
	for(int i=1;i<n;i++)
	{
		int j = pi[i-1];
 
		while(j > 0 && (st[i] != st[j]))
		j = pi[j-1];
 
		if(st[i] == st[j]) j++;
 
		pi[i] = j;
	}
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 
	lli t , k;
	cin>>t;
	while(t--)
	{
		cin>>st>>k;
		calcPI();
		int n = st.size();
		cout<<n + (k - 1) * (n - pi[n-1])<<endl;
	}
}