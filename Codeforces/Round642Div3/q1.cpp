#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pairs;

void solve(){
  ll n,k,i,j;
  cin>>n>>k;
  if(n==1){
    cout<<"0"<<endl;
  }
  else if(n==2){
    cout<<k<<endl;
  }
  else{
    cout<<2*k<<endl;
  }
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
