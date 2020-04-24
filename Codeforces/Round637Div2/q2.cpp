#include<iostream>
#include <cstdio>
#define ll long long
using namespace std;
ll a[200005];
ll peaks[200005];
int main()
{
  ll t, n, k, llimit, index, p, temp;
  freopen("input.txt","r",stdin);
  cin >> t;
  for(ll i=0; i<t; i++){
    cin>>n>>k;
    for(ll j=1; j<=n; j++){
      cin>>a[j];
    }

    peaks[1] = 0;
    peaks[2] = 0;
    for(ll j=3; j<=n; j++){
      if((a[j-1] > a[j-2]) && (a[j-1] > a[j]) ){
        peaks[j] = (peaks[j-1]+1);
      }
      else{
        peaks[j] = peaks[j-1];
      }
    }
    llimit = 1;
    index = 1;
    p = 0;
    for(ll j = k; j<=n; j++){
      temp = (peaks[j] - peaks[llimit+1]);
      if(temp > p){
        index = llimit;
        p = temp;
      }
      llimit++;
    }
    cout<<(p+1)<<" "<<index<<endl;

  }
}
