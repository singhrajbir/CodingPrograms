#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pairs;

void solve(){
  ll n,m,k,i,j;
  cin>>n>>m;
  cout<<(n*(m/2)+(n/2)*(m%2) + (m%2)*(n%2))<<endl;
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
