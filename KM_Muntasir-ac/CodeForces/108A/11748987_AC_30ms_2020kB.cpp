#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch=':';
    int h,m,t,i,j,f=0;
    int arr[16]={0,70,140,210,280,350,601,671,741,811,881,951,1202,1272,1342,1412};

    cin>>h>>ch>>m;
    t=(h*60)+m;
    for(i=t+1; i<=1440; i++)
    {
        if(i==1440) {
        cout<<"00:00"<<endl;
        break;
        }
        else if(i==70) {
        cout<<"01:10"<<endl;
        break;
        }else if(i==140) {
        cout<<"02:20"<<endl;
        break;
        }else if(i==210) {
        cout<<"03:30"<<endl;
        break;
        }else if(i==280) {
        cout<<"04:40"<<endl;
        break;
        }
        else if(i==350) {
        cout<<"05:50"<<endl;
        break;
        }
        else if(i==601) {
        cout<<"10:01"<<endl;
        break;
        }
        else if(i==1202) {
        cout<<"20:02"<<endl;
        break;
        }
        for(j=7;j<16;j++) {
            if(i==arr[j]) {
                cout<<(i/60)<<ch<<(i%60)<<endl;
                f=1;
                break;
            }
        }
        if(f==1)
            break;
    }

    return 0;
}

