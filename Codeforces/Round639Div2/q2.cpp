#include<iostream>
#include <cstdio>
#include <math.h>
#define ll long long
using namespace std;


ll countCards(ll h){
  return (h*(3*h + 1))/2;
}
int main()
{
  ll i, t, n, j, k, ans, height, diff;
  //freopen("input.txt","r",stdin);
  cin >> t;
  for(i=0; i<t; i++){
    cin>>n;
    ans = 0;
    while(n >= 2){
      diff = 1;
      height = 1;
      while(diff!=0){
        //cout<<n<< " "<< countCards(height) << " " << countCards(height+diff)<<endl;
        if(countCards(height)<=n && countCards(height+diff)<=n){
          height = height + diff;
          diff = 2*diff;
        }
        else
        {
          diff = diff/2;
        }
      }
      //cout<<countCards(height)<<endl;
      n = (n - countCards(height));
      ans += 1;
    }
    cout<<ans<<endl;
  }
}
