#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pairs;

void solve(){
  ll n,k,i,j;
  cin>>n>>k;
  for(i=2;i<=n;i++){
    if(n%i==0){
      break;
    }
  }
  cout<<(n+i+(k-1)*2)<<endl;
}

int main()
{
  ll i,t;
  //freopen("input.txt","r",stdin);
  cin >> t;
  for(i=0; i<t; i++){
    solve();
  }
}
