#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pairs;
int a[30];
int b[30];

void solve(){
  ll n,k,i,j,sum;
  cin>>n>>k;
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  for(i=0;i<n;i++){
    cin>>b[i];
  }
  sort(a,a+n);
  sort(b, b+n, greater<int>());
  i=0;
  while(i<k){
    if(a[i]<b[i]){
      a[i]=b[i];
    }
    else
      break;
    i++;
  }
  sum = 0;
  for(i=0;i<n;i++){
    sum+=a[i];
  }
  cout<<sum<<endl;
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
