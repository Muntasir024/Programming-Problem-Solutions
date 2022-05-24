#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[105];
    int len,i,cnt,j,flag=0;
    cin>>str;
    len=strlen(str);
    for(i=0;i<len-5;i++) {
        if(str[i]=='1' && str[i+1]=='1' && str[i+2]=='1' && str[i+3]=='1' && str[i+4]=='1' && str[i+5]=='1' && str[i+6]=='1' )
            flag=1;
        else if(str[i]=='0' && str[i+1]=='0' && str[i+2]=='0' && str[i+3]=='0' && str[i+4]=='0' && str[i+5]=='0' && str[i+6]=='0' )
            flag=1;
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}