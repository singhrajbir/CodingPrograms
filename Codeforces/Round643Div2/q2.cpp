#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pairs;

int a[300005];

void solve(){
  ll n,k,i,j,tem,rem,ans;
  cin>>n;
  for(i=1;i<=n;i++){
    a[i] = 0;
  }
  for(i=1;i<=n;i++){
    cin>>tem;
    a[tem]++;
  }
  rem = 0;
  ans = 0;
  for(i=1;i<=n;i++){
    if(a[i]!=0){
      ans += (a[i]+rem)/i;
      rem = (a[i]+rem)%i;
    }
  }
  cout<<ans<<endl;

}

int main()
{
  ll i,t;
  freopen("input.txt","r",stdin);
  cin >> t;
  for(i=0; i<t; i++){
    solve();
  }
}
