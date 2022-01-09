#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    string s;
    cout<<"Enter string: ";
    getline(cin>>ws,s);
    string d="%20";
    s=rtrim(s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            cout<<"found"<<endl;
            s.replace(i,1,d);
        }
    }
    cout<<s<<endl;
    return 0;
}
