#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n;
   cout<<"Enter number:"<<endl;
   cin>>n;
   if((n&1)==0)
   {
       cout<<"Even"<<endl;
   }
   else
   {
       cout<<"Odd"<<endl;
   }
   return 0;
}
