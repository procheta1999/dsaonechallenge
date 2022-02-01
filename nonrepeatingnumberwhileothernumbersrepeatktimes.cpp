#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int num=0;
   vector<int> arr;
   vector<int> arr32(32,0);
   for(int i=0;i<n;i++)
   {
       int el;
       int x=0;
       cin>>el;
       arr.push_back(el);
       while(el)
       {
           if((el&1)==1)
           {
               arr32[x]++;
           }
           el=el>>1;
           x++;
       }
   }
       for(int i=0;i<arr32.size();i++)
       {
           arr32[i]=arr32[i]%k;
       }
       for(int i=0;i<arr32.size();i++)
       {
           if(arr32[i]==1)
           {
              num=num+pow(2,i);
           }
       }
 cout<<num<<endl;
   return 0;
}
