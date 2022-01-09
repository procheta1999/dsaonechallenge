#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include <bits/stdc++.h>
#include <map>
using namespace std;


int main() {
   
  	string line;
  
    getline(cin,line);
    map<string,bool> m;
    int len=line.length();
    for(int i=0;i<len;i++)
    {
        string a=to_string(line[i]);
        if(isalpha(line[i]))
        {
            if(m.find(a)==m.end())
            {
                m[a]=true;
            }
            else
            {
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
	
	cout<<"Yes"<<endl;
}
