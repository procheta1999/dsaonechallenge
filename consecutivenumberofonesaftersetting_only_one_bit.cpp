#include <iostream>
#include <bits/stdc++.h>
int FlipBit(long n)
{
  while(n)
  {
      if(n&1==1)
    {
      currlength++;
    }
    else
    {
      if(n^2==0)
      {
        prevlength=0;
      }
      else
      {
        prevlength=currlength;
      }
      currlength=0;
    }
    maxlength=fmax(prevlength+currlength,maxlength);
    n=n>>1;
  }
  return maxlength+1;
}  
  
