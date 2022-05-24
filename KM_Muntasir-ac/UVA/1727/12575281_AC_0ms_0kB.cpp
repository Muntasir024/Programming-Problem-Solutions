#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cnt,i,j,k;
    string mth[15] = {"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    string day[10] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    string m,d;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>m>>d;
        if(m=="APR" || m=="JUN" || m=="SEP" || m=="NOV")
        {
            if(d == "FRI")
            {
                cout<<10<<endl;
            }
            else if(d == "THU" || d == "SAT")
            {
                cout<<9<<endl;
            }
            else
            {
                cout<<8<<endl;
            }
        }
        else if(m == "FEB")
        {
            cout<<8<<endl;
        }
        else
        {
            if(d == "THU" || d == "FRI")
            {
                cout<<10<<endl;
            }
            else if(d == "WED" || d == "SAT")
            {
                cout<<9<<endl;
            }
            else
            {
                cout<<8<<endl;
            }
        }
    }
    return 0;
}
