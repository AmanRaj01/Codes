#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long binarySearch(long long a[], long long l, long long r, long long x)
{
    while (l <= r) {
        long long m = l + (r - l) / 2;
        if (a[m] == x)
            return m;
        if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }

    return -1;
}
long long srh(long long a[],long long x,long long p,long long n)
{
    long long i;
    for(i=p;i<n;i++)
    {
        if(a[i] == x)
            return i;
    }
    for(i=p;i>=0;i--)
    {
        if(a[i] == x)
            return i;
    }
    return -1;
}
long long hur(long long a,long long b)
{
    if(a>b)
        return (a-b);
    else
        return (b-a);
}

int main() {
	int t;
	cin>>t;
	for(int q=0;q<t;q++)
	{
	    long long n,x,p,k,i,r,c=0;
	    cin>>n>>x>>p>>k;
	    long long a[n];
	    for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        //r = binarySearch(a, 0, n - 1, x);
        r = srh(a,x,p-1,n);
        k--;
        p--;
        if(r == -1)
        {
            a[k]=x;
            sort(a, a+n);
            //r = binarySearch(a, 0, n - 1, x);
            r = srh(a,x,p,n);
            c++;
        }
        /*for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<r<<p<<k<<endl;*/
        if(p==r)
            cout<<c;
        else if(k==p)
            cout<<c+hur(r,p);
        else if(k==r)
            cout<<"-1";
        else if((k>p && p>r)||(k<p && p<r))
        {
            cout<<c+hur(r,p);
        }
        else
            cout<<"-1";
        cout<<endl;
	}
	return 0;
}
