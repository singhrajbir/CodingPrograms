#include<iostream>
#include <cstdio>
#include <math.h>
#include<vector>
#include <map>
#define ll long long
using namespace std;

void solve(){
  ll n1,n2,n3,i,j,k;
  cin>>n1>>n2>>n3;

  if(n2%2==0){
    if(n2==0){
      string s1 = "";
      for(i=0;i<n1;i++){
        s1+="0";
      }
      if(s1.compare("") != 0)
        s1+="0";
      string s3 = "";
      for(i=0;i<n3;i++){
        s3+="1";
      }
      if(s3.compare("") != 0)
        s3+="1";
      cout<<(s1+s3)<<endl;
    }
    else{
      string s1 = "";
      for(i=0;i<n1;i++){
        s1+="0";
      }
      string s2 = "";
      for(i=0;i<n2/2;i++){
        s2+="01";
      }
      string s3 = "";
      for(i=0;i<n3;i++){
        s3+="1";
      }
      cout<<(s1+s2+s3+"0")<<endl;
    }
  }
  else{
    string s1 = "";
    for(i=0;i<n1;i++){
      s1+="0";
    }
    string s2 = "";
    for(i=0;i<(n2+1)/2;i++){
      s2+="01";
    }
    string s3 = "";
    for(i=0;i<n3;i++){
      s3+="1";
    }
    cout<<(s1+s2+s3)<<endl;
  }
}

int main()
{
  ll t;
  freopen("input.txt","r",stdin);
  cin>>t;
  while(t--){
    solve();
  }
}
