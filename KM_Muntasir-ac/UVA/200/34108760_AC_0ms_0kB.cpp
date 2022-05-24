#include<bits/stdc++.h>
using namespace std;

vector<int> adj[26];
stack<char> ans;

bool f[26]{}, a[26]{};

void dfs(int num)
{
	f[num] = true;
	for(auto& i : adj[num])
		if (!f[i]) dfs(i);
	ans.emplace(num + 'A');
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s, p;
	cin >> s;
	unordered_set<int> us;
	while (cin >> p && p != "#") {
		for (int i = 0; s[i] && p[i]; ++i) {
			us.emplace(s[i] - 'A');
			us.emplace(p[i] - 'A');
			if (s[i] != p[i]) {
				adj[s[i] - 'A'].emplace_back(p[i] - 'A');
				a[p[i] - 'A'] = true;
				break;
			}
		}
		s = p;
	}
	for (auto& i : us)
		if (!a[i]) dfs(i);
	while (!ans.empty()) cout << ans.top(), ans.pop();
	cout << endl;
	return 0;
}
