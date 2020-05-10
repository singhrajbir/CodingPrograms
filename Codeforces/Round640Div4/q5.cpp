#include<iostream>
#include <cstdio>
#include <math.h>
#include<vector>
#include <map>
#define ll long long
using namespace std;

int main()
{
  ll i, j, k, t, n, temp, tem, ans;
  freopen("input.txt","r",stdin);
  vector<int> a;
  vector<int> sum;
  int amap[8010];
  cin>>t;
  for(i=0; i<t; i++){
    cin>>n;
    a.clear();
    sum.clear();
    for(j=0;j<n;j++){
      cin>>temp;
      a.push_back(temp);
    }
    for(j=0;j<8010;j++){
      amap[j] = 0;
    }
    tem = 0;
    for(j=0;j<n;j++){
      tem += a[j];
      sum.push_back(tem);
    }
    for(j=1;j<n;j++){
      if(sum[j]>n)
        break;
      amap[sum[j]] = 1;
    }
    for(j=1;j<n;j++){
      for(k=j+1;k<n;k++){
        if((sum[k]-sum[j-1])>n)
          break;
        amap[sum[k]-sum[j-1]] = 1;
      }
    }
    ans = 0;
    for(j=0;j<n;j++){
      if(amap[a[j]] == 1)
        ans += 1;
    }
    cout<<ans<<endl;
  }
}
