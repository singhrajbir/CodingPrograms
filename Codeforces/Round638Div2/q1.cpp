#include<iostream>
#include <cstdio>
#include <math.h>
#define ll long long
using namespace std;
int main()
{
  ll i, j, t, n, sum1, sum2, temp, num;
  //freopen("input.txt","r",stdin);
  cin >> t;
  for(i=0; i<t; i++){
    cin>>n;
    sum1 = 0;
    sum2 = 0;
    temp = n/2;
    for(j=1;j<=n;j++){
      num = pow (2,j);
      if(j<temp || j==n){
        sum1 += num;
      }
      else
        sum2 += num;
    }
    cout<<abs(sum1-sum2)<<endl;
  }
}
