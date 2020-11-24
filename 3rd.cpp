#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int q=0;q<t;q++)
	{
	    int n=0,i;
	    cin>>n;
	    int a[n+1];
	    a[0]=0;
	    a[1]=2;
	    a[2]=3;
	    a[3]=1;
	    a[4]=5;
	    a[5]=4;
	    a[6]=6;
	    //cout<<n<<endl;
	    //cin>>n;
	    if(n==1)
            cout<<"1";
        else if((n&(n-1))==0)
            cout<<"-1";
        else
        {
            if(n>6)
            {
                for(i=7;i<=n;i++)
                {
                    if((i&(i-1))==0)
                       {
                           //cout<<"true"<<endl;
                           a[i]=i+1;
                           a[i+1]=i;
                           i++;
                       }
                    else
                       {
                           a[i]=i;
                       }
                }
            }
            for(i=1;i<=n;i++)
            {
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
	}
	return 0;
}
