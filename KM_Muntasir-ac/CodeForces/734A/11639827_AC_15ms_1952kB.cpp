#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100005];
    int n,i,k=0,j=0;
    scanf("%d",&n);
    scanf("%s",str);
    for(i=0;i<n;i++) {
        if(str[i]=='A')
            k++;
        else if(str[i]=='D')
            j++;
    }
    if(k>j)
        cout<<"Anton"<<endl;
    else if(k<j)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;


    return 0;
}
