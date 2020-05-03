#include<iostream>
#include <cstdio>
#include <algorithm>
#define ll long long
int a[100005];
using namespace std;
int main()
{
  ll i, j, n, k, check = 0, ch, t, temp;
  string s,ans;
  //freopen("input.txt","r",stdin);
  cin >> t;
  for(i=0; i<t; i++){
    cin>>n>>k;
    cin>>s;
    for(j=0;j<s.length();j++){
      a[j] = (s[j] - 'a');
    }
    sort(a,a+n);
    if(k==1){
      for(j=0;j<n;j++){
        cout<<char(a[j]+97);
      }
      cout<<endl;
    }
    else{
      if(a[0]!=a[k-1]){
        ans = char(a[k-1]+97);
      }
      else{
        ans = char(a[k-1]+97);
        if(k<n && a[k] == a[n-1]){
          temp = (n-k)/k;
          if(temp*k < (n-k))
            temp++;
          for(j=0;j<temp;j++){
            //cout<<"Hi"<<endl;
            ans += char(a[k]+97);
          }
        }
        else{
          for(j=k; j<n ;j++){
            ans += char(a[j]+97);
          }
        }
      }
      cout<<ans<<endl;
    }
  }
}
