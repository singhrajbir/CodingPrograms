#include<iostream>
#include <cstdio>
#include <math.h>
#define ll long long
using namespace std;

int a[200005];

ll mode(ll k, ll n){
  if(k<0){
    k = (-1*k);
    return (n - k%n)%n;
  }
  return k%n;
}
int main()
{
  ll i, j, t, n, temp, ans;
  //freopen("input.txt","r",stdin);
  cin >> t;
  for(i=0; i<t; i++){
    cin>>n;
    ans = 0;
    for(j=0;j<n;j++){
      a[j] = 0;
    }
    for(j=0;j<n;j++){
      cin>>temp;
      if(a[mode(temp+j,n)]==1){
        ans = 1;
      }
      else{
        a[mode(temp+j,n)] = 1;
      }
    }
    if(ans == 0){
      cout<<"YES"<<endl;
    }
    else
      cout<<"NO"<<endl;
  }
}
