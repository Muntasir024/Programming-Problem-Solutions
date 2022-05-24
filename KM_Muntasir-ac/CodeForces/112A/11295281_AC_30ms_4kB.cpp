#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[1001],str2[1002];
    gets(str1);
    strupr(str1);
    gets(str2);
    strupr(str2);

    printf("%d\n", strcmp(str1,str2) );


    return 0;
}
