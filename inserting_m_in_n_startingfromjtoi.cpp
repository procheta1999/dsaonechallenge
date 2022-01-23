#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int32_t n=1201;
	int32_t m=8;
	int i=3;
	int j=6;
	int32_t ans=m<<i;
	int32_t rem;
	int32_t mod_n=n;
	while(i!=j)
	{
	    
	    rem=~(1<<i);
	    mod_n=mod_n&rem;
	    i++;
	}
	int32_t result=mod_n|ans; //1217
// 	cout<<ans<<endl;
	cout<<result<<endl;
}
