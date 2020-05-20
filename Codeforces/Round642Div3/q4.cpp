#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pairs;
int a[30];
int b[30];

void solve(){
  int n,k,i,j,mid;
  cin>>n;
  int arr[n+1];
  vector<int> a{n,-1,n};
  priority_queue<vector<int>> q;
  q.push(a);
  i=1;
  while(!q.empty()){
    vector<int> x = q.top();
    q.pop();
    int l = -x[1];
    int r = x[2];
    if((r-l+1)%2 !=0){
      mid = (l+r)/2;
      arr[mid] = i;
      if(mid>l){
        vector<int> temp{mid-l,-l,mid-1};
        q.push(temp);
      }
      if(mid<r){
        vector<int> temp{r-mid,-mid-1,r};
        q.push(temp);
      }
    }
    else{
      mid = (l+r-1)/2;
      arr[mid] = i;
      if(mid>l){
        vector<int> temp{mid-l,-l,mid-1};
        q.push(temp);
      }
      if(mid<r){
        vector<int> temp{r-mid,-mid-1,r};
        q.push(temp);
      }
    }
    i++;
  }
  for(i=1;i<=n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
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
