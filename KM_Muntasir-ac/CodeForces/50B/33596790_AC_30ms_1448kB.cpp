#include<bits/stdc++.h>
using namespace std;

int freq[50];

int main()
{
    string s;
    cin >> s;
    int d, l=s.size();
	for(int i=0;i<l;i++) {
            if(s[i]>='a' && s[i]<='z') d = s[i]-'a';
            else                       d = 26+s[i]-'0';
            freq[d]++;
    }
	long long res=l;
	for(int i=0;i<40;i++){
		res+=(long long)(freq[i])*(freq[i]-1);
	}
	printf("%I64d\n",res);
	return 0;
}
