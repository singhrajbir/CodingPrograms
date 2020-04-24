#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
  int t, n, prevp, prevc, p, c, ans;
  freopen("input.txt","r",stdin);
  cin >> t;
  for(int i=0; i<t; i++){
    prevp = 0;
    prevc = 0;
    ans = 0;
    cin>>n;
    for(int j=0; j<n; j++){
      cin>>p>>c;
      if(p < prevp || c < prevc || (p-prevp)<(c-prevc)){
        ans = 1;
      }
      prevp = p;
      prevc = c;
    }
    if(ans == 0){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }

}
