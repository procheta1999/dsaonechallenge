#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   unsigned int n;
   cin>>n;
   unsigned int res=0;
   int i=0;
   while(n)
   {
       if((n&1)==0 && (n&2)==2)
       {
           res=res+pow(2,i);
       }
       else if ((n&1)==1 && (n&2)==2)
       {
           res=res+pow(2,i)+pow(2,i+1);
       }
       else if((n&1)==1 && (n&2)==0)
       {
           res=res+pow(2,i+1);
       }
       i=i+2;
       n=n>>2;
   }
   cout<<res<<endl;
   return 0;
}
