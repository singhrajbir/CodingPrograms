#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pairs;
int a[100005];

void solve(){
  ll n,k,i,j;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  int count = 1;
  int max = 1;
  for(i=0;i<n;i++){
    if(count>=a[i]){
      count++;
      max = count;
    }
    else
      count++;
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
