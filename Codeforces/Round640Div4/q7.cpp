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
  cin>>t;
  for(i=0; i<t; i++){
    cin>>n;
    if(n<=3){
      cout<<"-1"<<endl;
    }
    else if(n==4){
      cout<<"3 1 4 2"<<endl;
    }
    else{
      for(j=1;j<=n;){
        cout<<j<<" ";
        j = j +2;
      }
      for(j=2;j<=n;){
        cout<<j<<" ";
        j = j +2;
      }
      cout<<endl;
    }
  }
}
