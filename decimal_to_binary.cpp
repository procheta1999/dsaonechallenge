#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	double n=0.625;
	string s=".";
	if(n>=1 || n<=0)
	{
	    cout<<"ERROR"<<endl;
	    return 0;
	}
	while(n)
	{
	    if(s.size()>32)
	    {
	        cout<<"Error"<<endl;
	        return 0;
	    }
	    double ans=n*2.0;
	    if(ans>=1)
	    {
	        s=s+"1";
	        n=ans-1;
	    }
	    else
	    {
	        s=s+"0";
	        n=ans;
	    }
	}
	cout<<s<<endl;
}
