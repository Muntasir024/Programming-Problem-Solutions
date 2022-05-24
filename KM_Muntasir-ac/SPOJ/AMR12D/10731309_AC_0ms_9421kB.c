    #include<stdio.h>
    #include<string.h>
    int main()
    {
        int i,t,n;
        char str[12];
        scanf("%d",&t);
        while(t--)
        {
            int count=0;
            scanf("%s",&str);
            n=strlen(str)-1;
            for(i=0;i<=n/2;i++,n--)
            {
                if(str[i]!=str[n])
                {
                    count=1;
                    break;
                }
            }
            if(count!=1)
                printf("YES\n");
            else
                printf("NO\n");
        }
        return 0;
    }
