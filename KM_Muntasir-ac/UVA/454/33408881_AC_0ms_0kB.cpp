#include <bits/stdc++.h>
using namespace std;

string rem(string S){
	sort(S.begin(), S.end());
	int L = S.length() - 1, i;
	string R = "";
	for(i=0; i<=L; i++)
		if (!isspace(S[i]))
			R += S[i];
	return R;
}

int main(){
	int T;
	cin >> T;
	string str;
	getline(cin, str); getline(cin, str);
	while (T--){
		vector< string > V;
		map<string, string> Map;
		while (getline(cin, str)){
			if (str == "")
				break;
			V.push_back(str);
			Map[str] = rem(str);
		}
		sort(V.begin(), V.end());
		int SZ = V.size() - 1;
		int i, j;
		for(i=0; i<=SZ; i++)
            for(j=i+1; j<=SZ; j++)
				if (Map[V[i]] == Map[V[j]])
					cout << V[i] << " = " << V[j] << endl;
		if (T)
			cout << endl;
	}
	return 0;
}
