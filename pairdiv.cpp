#include <bits/stdc++.h>
#include <utility>
#include <iterator>
#include <map>
#include <math.h>

using namespace std;

long long power(long long n ,long long p)
{
    long long ans =1;
    for(long long i =0;i<p;i++)
    {
        ans = ans *n;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        pair <long long , long long> p;
        map<long long, long long> mp;
        long long sf =1000000000000000007;
        int flag=0;

        long long x, a, b;
        cin>>a>>b;
        p = make_pair(a,b);
        if(p.first < p.second)
            cout<<p.first<<endl;
        else if(p.first % p.second != 0)
            cout<<p.first<<endl;
        else
        {
            long long y = p.second ,d=1000000000000000007;
            for(x=2 ; x*x <= (p.second);x++)
            {
                while(y % x == 0)
                {
                    y=y/x;
                    mp[x]++;
                }
            }
            if(y>1)
                mp[y]++;
            for(auto &z: mp)
            {
                if(z.first < sf)
                {
                    sf = z.first;
                }
                //cout<<z.first<<" "<<z.second<<endl;
                long long c = 0 , k = p.first;
                while(k % z.first == 0)
                {
                    k = k/z.first;
                    c++;
                }
                //cout<<c<<endl;
                if(c < z.second)
                {
                    cout<<p.first<<endl;
                    flag =1;
                    break;
                }
                else
                {
                    if(power(z.first ,(c - z.second +1)) < d)
                    {
                        d = power(z.first ,(c- z.second +1));
                    }
                }
            }
            if(p.first == p.second)
            {
                flag=1;
                cout<<p.first/sf<<endl;
            }
            if(flag == 0)
                cout<<p.first/d<<endl;
        }
        t--;
    }
    return 0;
}
