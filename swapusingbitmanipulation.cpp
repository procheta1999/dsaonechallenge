#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int a=5;
   int b=3;
   a=a^b;
   b=a^b;
   a=a^b;
   cout<<a<<endl;
   cout<<b<<endl;
   return 0;
}
