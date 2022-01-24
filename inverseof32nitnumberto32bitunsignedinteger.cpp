#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long inverse(long n)
{
  long number=pow(2,32)-1;
  long result=n^number;
  return result;
}
