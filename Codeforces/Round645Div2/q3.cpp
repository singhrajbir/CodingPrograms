#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pairs;

void solve(){
  ll x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;
  cout<<(1+(x2-x1)*(y2-y1))<<endl;
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
