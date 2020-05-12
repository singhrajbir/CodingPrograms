#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pairs;
int a[100005];
int b[100005];

void solve(){
  ll n,k,i,j,max;
  cin>>n;
  for(i=1;i<=n;i++){
    cin>>a[i];
    b[i] = 1;
  }
  for(i=1;i<=n/2;i++){
    k = 2;
    while(k*i <= n){
      if(a[k*i]>a[i] && (b[k*i] < (b[i]+1)))
        b[k*i] = (b[i]+1);
      k++;
    }
  }
  max = b[1];
  for(i=1;i<=n;i++){
    if(b[i]>max)
      max = b[i];
  }
  cout<<max<<endl;
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
