#include<bits/stdc++.h>

using namespace std;

/*

        Bismillahir Rahmanir Rahim
        Problem : UVa 11344 - The Huge One
        Problem Link : UVa 11344 - The Huge One
        Topics : Divisibility Rules
        Solver : Masud Parves
        I Love Code More than Sharks Love Blood <3
*/

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(a)  a.begin(), a.end()


#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)

#define f0(i,b) for(int i=0;i<(b);i++)
#define f1(i,b) for(int i=1;i<=(b);i++)
#define f2(i,a,b) for(int i=(a);i<=(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)

#define CIN ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mx  550
#define TEST_CASE(t) for(int z=1 ; z<=t ; z++)
#define PRINT_CASE printf("Case %d: ",z)
#define NOT_VISITED 0
#define IS_VISITED 1



int fx[4]= {1,-1,0,0};
int fy[4]= {0,0,1,-1};


const double PI = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;
const int maxn = (int)2e5+5;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, int> plli;
typedef pair<int, ll> pill;


int num[14];

bool isDiv1(const string &M)
{
    if (num[1] != -1)
        return num[1];

    return num[1] = true;
}


bool isDiv2(const string &M)
{
    if(num[2]!=-1)
        return num[2];
    int len = M.size();
    int lastDigit=(M[len-1] & 15);
    if(lastDigit%2==0)
    {
        return num[2]=true;
    }
    return num[2] = false;
}

bool isDiv3( const string &M)
{
    if(num[3]!=-1)
        return num[3];
    int sum=0;
    for(auto ch : M)
        sum+= (ch & 15);

    if(sum%3==0)
    {
        return num[3]=true;
    }
    return num[3] = false;
}


bool isDiv4(const string &M)
{
    if(num[4]!=-1)
        return num[4];
    //int twoDigit=(M[M.size()-1] & 15)*10 + (M[M.size()-2] & 15);

    int len=M.size(),tail=0;

    if(len<3)
        tail=stoi(M);
    else
        tail=stoi(M.substr(len-2));


    if(tail%4==0)
    {
        return num[4]=true;
    }
    return num[4]=false;
}

bool isDiv5(const string &M)
{
    if(num[5]!=-1)
        return num[5];
    int lastDigit=(M[M.size()-1] & 15);

    if(lastDigit == 0 || lastDigit == 5)
    {
        return num[5]=true;
    }
    return num[5] = false;
}

bool isDiv6(const string &M)
{
    if(num[6]!=-1)
        return num[6];

    return num[6]=isDiv2(M) && isDiv3(M);
}

bool isDiv7(const string &M)
{
    if(num[7]!=-1)
        return num[7];

    int idx=M.size()-1,sum=0;
    bool flag=true;

    while(idx -2>=0)
    {
        if(flag)
            sum+=stoi(M.substr(idx-2,3));
        else
            sum-=stoi(M.substr(idx-2,3));
        idx-=3;
        flag = !flag;
    }

    if(idx>=0)
    {
        if(flag)
            sum+=stoi(M.substr(0,idx + 1 ));
        else
            sum-=stoi(M.substr(0,idx + 1 ));
    }

    if(sum%7==0)
        return num[7]=true;
    return num[7]=false;

}

bool isDiv8(const string &M)
{
    if(num[8]!=-1)
        return num[8];

    int tail=0,len=M.size();
    if(len<4)
        tail=stoi(M);
    else
        tail=stoi(M.substr(len-3));



    if(tail%8==0)
    {
        return num[8]=true;
    }
    return num[8]=false;

}



bool isDiv9( const string &M)
{
    if(num[9]!=-1)
        return num[9];
    int sum=0;
    for(auto ch : M)
        sum+= (ch & 15);

    if(sum%9==0)
    {
        return num[9]=true;
    }
    return num[9]=false;
}

bool isDiv10(const string &M)
{
    if(num[10]!=-1)
        return num[10];
    int lastDigit=(M[M.size()-1] & 15);

    if(lastDigit == 0 )
    {
        return num[5]=true;
    }
    return num[10]=false;
}

bool isDiv11(const string &M)
{
    if(num[11]!=-1)
        return num[11];
    int sum=0;
    bool flag=true;

    for(auto ch : M)
    {
        if(flag)
            sum+=(ch & 15);
        else
            sum-=(ch & 15);
        flag = !flag;
    }
    if(sum % 11 == 0)
        return num[11]=true;
    return num[11]=false;
}

bool isDiv12(const string &M)
{
    if(num[12]!=-1)
        return num[12];


    return num[12]=isDiv3(M) && isDiv4(M);
}

int main()
{
    //CIN
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin>>t;

    TEST_CASE(t)
    {
        memset(num, -1, sizeof num);
        string s;
        int n,div;
        cin>>s;
        cin>>n;
        bool wonderful=true;
        while(n--)
        {
            cin>>div;
            switch(div)
            {
            case 1:
                wonderful &= isDiv1(s);
                break;
            case 2:
                wonderful &= isDiv2(s);
                break;
            case 3:
                wonderful &= isDiv3(s);
                break;
            case 4:
                wonderful &= isDiv4(s);
                break;
            case 5:
                wonderful &= isDiv5(s);
                break;
            case 6:
                wonderful &= isDiv6(s);
                break;
            case 7:
                wonderful &= isDiv7(s);
                break;
            case 8:
                wonderful &= isDiv8(s);
                break;
            case 9:
                wonderful &= isDiv9(s);
                break;
            case 10:
                wonderful &= isDiv10(s);
                break;
            case 11:
                wonderful &= isDiv11(s);
                break;
            case 12:
                wonderful &= isDiv12(s);
                break;
            }
        }
        if(wonderful)
            cout << s << " - Wonderful."<<endl;
        else
            cout << s << " - Simple."<<endl;
        wonderful = true;
    }


    return 0;
}