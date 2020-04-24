#include<iostream>
#include <cstdio>
#define ll long long
using namespace std;
ll a[100005];
ll taken[100005];
int main()
{
  ll t, n, temp, ans, next;
  // freopen("input.txt","r",stdin);
  cin >> t;
  for(ll i=0; i<t; i++){
    cin>>n;
    for(ll j=1; j<=n; j++){
      cin>>temp;
      a[temp] = j;
      taken[j] = 0;
    }
    taken[n+1] = 1;

    ans = 1;
    next = -1;
    for(ll j=1; j<=n; j++){
        if(next == -1){
          if(taken[a[j]+1]==1){
            next = -1;
          }
          else{
            next = a[j]+1;
          }
        }
        else if(next == a[j]){
          if(taken[a[j]+1]==1){
            next = -1;
          }
          else{
            next = a[j]+1;
          }
        }
        else{
          ans = 0;
          break;
        }
        taken[a[j]]=1;
      }
      if(ans==0){
        cout<<"No"<<endl;
      }
      else{
        cout<<"Yes"<<endl;
      }
    }
  }
