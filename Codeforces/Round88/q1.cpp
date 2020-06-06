#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pairs;

void solve(){
  ll n,m,k,i,j;
  cin>>n>>m>>k;
  if(n/k >= m){
    cout<<m<<endl;
  }
  else{
    if((m-n/k)%(k-1) == 0){
        cout<<(n/k - (m-n/k)/(k-1))<<endl;
    }
    else
      cout<<(n/k - (m-n/k)/(k-1) - 1)<<endl;

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
