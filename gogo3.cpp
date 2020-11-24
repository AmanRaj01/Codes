#include <bits/stdc++.h>
#include <map>

using namespace std;


int bro(int a[], int n)
{
    map <int,int> m;
    int i,x;
    for(i=0;i<=n;i++)
    {
        if(a[i] != a[i+1])
            m[a[i]]++;
    }
    /*if(m[a[0]]==1 || m[a[n-1]]==1)
    {
        return 1;
    }*/
    if(m[a[0]] == n)
    {
        return 0;
    }
    //cout<<"m[a[0]] "<<m[a[0]]<<" m[a[n-1]] "<<m[a[n-1]]<<endl;

    m[a[0]]--;
    m[a[n-1]]--;
    //cout<<"m[a[0]] "<<m[a[0]]<<" m[a[n-1]] "<<m[a[n-1]]<<endl;
    x = INT_MAX;
    //cout<<"x "<<x<<endl;
    for(i=0;i<n;i++)
    {
        if(m[a[i]] < x)
        {
            x = m[a[i]];
        }
    }
    //cout<<"x "<<x<<endl;
    x = x+1;
    return x;
}


int main()
{
    int t,n;
    cin>>t;
    while(t>0)
    {
        int i;
        cin>>n;
        int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        a[n] = INT_MAX;
        int x = bro(a,n);
        cout<<x<<endl;


        t--;
    }
    return 0;
}
