#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pairs;

pairs maxdig(ll num){
  pairs a(10,-1);
  int dig;
  do{
    dig = num%10;
    if(dig < a.first){
      a.first = dig;
    }
    if(dig > a.second){
      a.second = dig;
    }
    num = num/10;
  }while(num != 0);

  return a;
}

void solve(){
  ll n,k,i,j;
  cin>>n>>k;
  j = 1;
  while(j<k){
    pairs p = maxdig(n);
    //cout<<p.first<<" "<<p.second<<endl;
    n = n + p.first*p.second;
    if(p.first == 0){
      break;
    }
    j++;
  }
  cout<<n<<endl;
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
