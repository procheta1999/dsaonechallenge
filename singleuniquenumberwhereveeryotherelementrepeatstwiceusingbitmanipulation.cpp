#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int x=0;
   vector<int> arr;
   for(int i=0;i<n;i++)
   {
       int el;
       cin>>el;
       arr.push_back(el);
       x=x^el;
   }
   cout<<x<<endl;
   return 0;
}
