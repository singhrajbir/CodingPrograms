#include<iostream>
#include <cstdio>
#define ll long long
using namespace std;
int main()
{
  ll t, x, y, a, b, ans=0;
  //freopen("input.txt","r",stdin);
  cin >> t;
  for(int i=0; i<t; i++){
    cin>>x>>y;
    cin>>a>>b;
    ans = 0;
    if(x>=y){
      ans += a*(x-y);
      if(2*a < b){
        cout<<(ans+2*a*y)<<endl;
      }
      else{
        cout<<(ans+b*y)<<endl;
      }
    }
    else{
      ans += a*(y-x);
      if(2*a < b){
        cout<<(ans+2*a*x)<<endl;
      }
      else{
        cout<<(ans+b*x)<<endl;
      }
    }

  }
}
