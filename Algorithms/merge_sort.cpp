#include<iostream>
#include <cstdio>
#define ll long long
ll d[100000];
using namespace std;

void mergesort(ll a, ll b){
  if(a >= b){
    return;
  }
  ll mid = (a+b)/2;
  mergesort(a, mid);
  mergesort(mid + 1, b);

  ll llength = mid - a + 1;
  ll rlength = b - mid;
  ll l[llength];
  ll r[rlength];

  ll index = 0, i;
  for(i=a; i<=mid; i++){
    l[index++] = d[i];
  }

  index = 0;
  for(i=(mid+1); i<=b; i++){
    r[index++] = d[i];
  }

  index = a;
  ll indexl = 0, indexr = 0;
  while(true){
    if(indexl>=llength || indexr>=rlength){
      break;
    }
    if(l[indexl] <= r[indexr]){
      d[index] = l[indexl];
      indexl++;
    }
    else{
      d[index] = r[indexr];
      indexr++;
    }
    index++;
  }

  while(indexl<llength){
    d[index++] = l[indexl];
    indexl++;
  }

  while(indexr<rlength){
    d[index++] = r[indexr];
    indexr++;
  }

}
int main()
{
  ll n;
  freopen("input.txt","r",stdin);
  cin>>n;
  for(ll i=0; i<n; i++){
    cin>>d[i];
  }
  mergesort(0, n-1);
  for(ll i=0; i<n; i++){
    cout<<d[i]<<endl;
  }
  return 0;
}
