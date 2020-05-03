#include<iostream>
#include <cstdio>
#define ll long long
using namespace std;

int gcd(int a, int b){
  if (a == 0)
    return b;
  return gcd(b % a, a);
}

ll lcm(ll a, ll b){
  return (a*b)/gcd(a, b);
}

ll max(ll a, ll b){
  if(a>b){
    return a;
  }
  return b;
}

int main()
{
  ll t, i, j, a, b, q, lc, l, r, index1, index2, diff, l1, r1, maxi, ans;
  // freopen("input.txt","r",stdin);
  cin >> t;
  for(i=0; i<t; i++){
    cin>>a>>b>>q;
    lc = lcm(a,b);
    maxi = max(a,b);
    for(j=0;j<q;j++){
      cin>>l>>r;
      diff = (lc-maxi);
      index1 = l/lc;
      index2 = r/lc;
      ans = 0;
      if(index1==index2){
        if(l>=(lc*index1 + maxi)){
          ans = (r-l+1);
        }
        else if(r>=(lc*index1 + maxi)){
          ans = (r - (lc*index1 + maxi) + 1);
        }
      }
      else{
        ans = (index2-index1-1)*diff;
        l1 = (lc*index1 + maxi);
        if(l >= l1){
            ans += (lc*(index1+1) - l);
        }
        else
          ans += (lc*(index1+1) - l1);

        r1 = (lc*index2 + maxi);
        if(r >= r1){
            ans += (r - r1 + 1);
        }
      }
      cout<<ans<<" ";
    }
    cout<<endl;
  }
}
