#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long t;
	cin>>t;
	for(int q=0;q<t;q++)
	{
	   long long n,k,i,s=0,x=0,z=0;
	   cin>>n>>k;
	   long long a[n];
	   for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
	   for(i=0;i<n;i++)
       {
           if( a[i] + s >= k )
           {
               s = s + a[i] - k;
               //cout<<"bro"<<endl;
           }
           else
           {
               x=i+1;
               z=1;
               //cout<<"yo"<<endl;
               break;
           }
       }
       if(z==0)
       {
           x = n + s/k + 1;
           //cout<<"no"<<endl;
       }
       cout<<x<<endl;
	}
	return 0;
}
