#include <iostream>
using namespace std;

int a[1000][1000];

int main()
{
    int n,m,s,c=0, i,j;
    cin>>n>>m;
    s=1;
    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
            a[i][j] = s++;

    s=1;
    for (j=0; j<m; j++)
        for (i=0; i<n; i++)
        {
            if (a[i][j] == s)
                c++;
            s++;
        }

    cout<<c<<endl;

    return 0;
}
