#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> vec;
    int n,i,x;
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        scanf("%d",&x);
        vec.push_back(x);
    }
    reverse(vec.begin(),vec.end());
    for(i=0;i<n;i++)
        printf("%d ",vec[i]);
    printf("\n");

    return 0;
}
