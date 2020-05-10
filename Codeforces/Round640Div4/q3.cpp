#include<iostream>
#include <cstdio>
#include <math.h>
#include<vector>
#define ll long long
using namespace std;

int main()
{
  ll i, t, n, k, rem, ans;
  freopen("input.txt","r",stdin);
  cin>>t;
  for(i=0; i<t; i++){
    cin>>n>>k;
    rem = k%(n-1);
    if(rem==0){
      cout<<(n*(k/(n-1)) - 1)<<endl;
    }
    else{
      cout<<(n*(k/(n-1)) + rem)<<endl;
    }
  }
}
