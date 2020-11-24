#include <bits/stdc++.h>
#include <map>

using namespace std;


/*int ret(int a[],int n)
{
    int x=0,c=0,i;
    for(i=0;i<n-1;i++)
    {
        c=0;
        while(a[i] == a[i+1])
        {
            c++;
            i++;
        }
        if(c==0)
        {
            return a[i];
        }
        i--;
    }
    return -1;
}*/


int main()
{
    int t,n;
    cin>>t;
    while(t>0)
    {
        int i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map <int,int> m;
        for(i=0;i<n;i++)
        {
            m[a[i]]=i+1;
        }
        sort(a,a+n);
        map <int,int> mp;
        for(i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        int x=-1;
        for(i=0;i<n;i++)
        {
            if(mp[a[i]] == 1)
            {
                x = m[a[i]];
                break;
            }

        }
        //int x = ret(a,n);
        cout<<x<<endl;
        t--;
    }
    return 0;
}
