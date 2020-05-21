#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pairs;

void solve(){
  ll n,s,i,j;
  cin>>n>>s;
  if(s > (2*n-1)){
    cout<<"YES"<<endl;
    for(i=1;i<n;i++){
      cout<<1<<" ";
    }
    cout<<(s-n+1)<<endl;
    cout<<(s - (n-1) - 1)<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}

int main()
{
  ll i,t;
  freopen("input.txt","r",stdin);
  //cin >> t;
  //for(i=0; i<t; i++){
    solve();
  //}
}
