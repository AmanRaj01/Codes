#include <bits/stdc++.h>


using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        int a[n];
        a[0] = n;
        //a[n-1] = 1;
        //int c=3;
        for(int i=1;i<n;i++)
        {
            a[i] = i;
        }
        //a[n-1]
        for(int i=0;i<n;i++)
            cout<<a[i]<<" "<<endl;
        t--;
    }
}
