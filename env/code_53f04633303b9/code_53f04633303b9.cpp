#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n,i,j,alice,bob;
	while(cin>>n)
	{
	    alice=0;
	    bob=0;
	    int a[n+1];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    if(n==1)cout<<"1"<<" "<<"0"<<endl;
	    else
	    {
	    for(i=0,j=n-1;i<=j;)
	    {
	       if(alice==bob && alice==0 && i!=j-1)
	       {
	           alice+=a[i++];
	           bob+=a[j--];
	       }
	       else if(alice > bob)
	       {
	           bob+=a[j--];
	       }
	       else if(alice <= bob)
	       {
	           alice+=a[i++];
	       }
	    }
	   // cout<<alice<<" "<<bob<<endl;
	    cout<<i<<" "<<n-j-1<<endl;
	}
	}
	return 0;
}