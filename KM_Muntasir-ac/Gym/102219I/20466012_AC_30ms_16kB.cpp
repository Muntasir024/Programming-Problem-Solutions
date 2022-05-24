#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, xi, yi;
    char a[107][107];
    for(i=0;i<3;i++)
    {
        for(j=0;j<10;j++)
        {
            scanf("%c", &a[i][j]);
            if(a[i][j]=='=')
                xi=i, yi=j;
        }
        getchar();
    }
    for(i=yi+1;i<10;i++)
    {
        if(a[xi][i]=='.') continue;
        else
        {
            printf("%c\n", a[xi][i]);
            return 0;
        }
    }
    cout<< "You shall pass!!!" <<endl;

    return 0;
}
