#include <bits/stdc++.h>
#include <map>

using namespace std;





int main()
{
    long long t,n;
    cin>>t;
    while(t>0)
    {
        long long i;
        cin>>n;
        long long m=n;
        vector<long long> a;
        a.push_back(1);
        long long k = a.size();
        for(i=2;i*i<=n;i++)
        {
            k = a.size();
            while((m%(i*i)==0) && (i%a[k-1] == 0))
            {
                a.push_back(i);
                m = m/i;
                k = a.size();
            }
        }
        a.push_back(m);
        k = a.size();
        cout<<k-1<<endl;
        for(i=1;i<k;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;


        t--;
    }
    return 0;
}
