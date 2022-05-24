#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int i, j;
        map<string, string> Map;
        vector< string > Word(N);
        for(i=0; i<N; i++)
        {
            cin >> Word[i];
            string temp = Word[i];
            sort(temp.begin(), temp.end());
            Map[Word[i]] = temp;
        }
        while (true)
        {
            string str, temp;
            cin >> str;
            if (str == "END")
                break;
            temp = str;
            sort(temp.begin(), temp.end());
            vector< string > vec;
            cout << "Anagrams for: " << str << endl;
            for(i=0; i<N; i++)
            {
                if (Map[Word[i]] == temp)
                    vec.push_back(Word[i]);
            }
            int SZ = vec.size();
            if (SZ == 0)
                cout << "No anagrams for: " << str << endl;
            else
                for(i=0; i<SZ; i++)
                    printf("%3d) %s\n", i+1, vec[i].c_str());
        }
        if (T)
            cout << endl;
    }
    return 0;
}
