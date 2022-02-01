#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int x=0;
   vector<int> arr;
   vector<int> arr1;
   vector<int> arr2;
   for(int i=0;i<n;i++)
   {
       int el;
       cin>>el;
       arr.push_back(el);
       x=x^el;
    //   if((el&1)==0)
      
    //   {
    //       arr2.push_back(el);
    //   }
   }
   int z=x;
   int b=x;
   int pos=b&(~(b-1));
   
      for(int i=0;i<arr.size();i++)
       {
           int ok=arr[i];
           if(ok&pos)
           {
             z=z^ok;  
           }
           
       } 
   
   cout<<z<<endl;
   int f=x^z;
   cout<<f<<endl;
   return 0;
}
