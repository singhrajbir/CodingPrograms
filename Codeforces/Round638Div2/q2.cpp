#include<iostream>
#include <cstdio>
#include <math.h>
#define ll long long
ll a[101];
ll pattern[101];
using namespace std;
int main()
{
  ll i, j, k, t, n, nump, num, l;
  //freopen("input.txt","r",stdin);
  cin >> t;
  for(i=0; i<t; i++){
    cin>>n>>k;
    for(j=1;j<=n;j++){
      a[j] = 0;
    }
    for(j=1;j<=n;j++){
      cin>>num;
      a[num] = 1;
    }
    nump=0;
    for(j=1;j<=n;j++){
      if(a[j] == 1){
        pattern[nump++] = j;
      }
    }
    if(nump>k){
      cout<<"-1"<<endl;
    }
    else{
      while(nump<k){
        pattern[nump] = pattern[nump-1];
        nump++;
      }
      cout<<k*n<<endl;
      for(j=1;j<=n;j++){
          for(l=0;l<nump;l++){
            cout<<pattern[l]<<" ";
          }
      }
      cout<<endl;
    }
  }
}
