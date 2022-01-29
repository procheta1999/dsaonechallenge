#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int countBits(int n)
{
    int count=0;
    while((n&(n-1))!=0)
    {
        count++;
        n=n&(n-1);
    }
    return count;
}
int main() 
{
    // int n=5;
    int n=11;
    int t=n-1;
    int f=n+1;
    while(t!=0)
    {
        if(countBits(n)==countBits(t))
        {
            cout<<t<<endl;
            break;
        }
        else
        {
            t=t-1;
        }
    }
    while(f!=15)
    {
        if(countBits(n)==countBits(f))
        {
            cout<<f<<endl;
            break;
        }
        else
        {
            f=f+1;
        }
    }
    return 0;

}
