#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    int currlength=0,prevlength=0,maxlength=0;
    while(n!=0)
    {
        if((n&1)==1)
        {
           currlength++; 
           
        }
        else {
        prevlength=currlength;
        currlength=0;
        }
        maxlength=fmax(prevlength+currlength,maxlength);
       
        prevlength=0;
        // cout<<"n  "<<n<<endl;
        //  cout<<"currlength   "<<currlength<<endl;
        // cout<<"prevlength "<<prevlength<<endl;
        // cout<<"maxlength    "<<maxlength<<endl;
        n=n>>1;
    }
    cout<<maxlength<<endl;
    return 0;
}
