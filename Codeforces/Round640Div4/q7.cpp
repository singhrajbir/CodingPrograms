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
  int b[5] = {3,1,4,2,5};
  for(k=0; k<t; k++){
    cin>>n;
    int a[n];
    if(n<=3){
      cout<<"-1";
    }
    else if(n==4){
      cout<<"3 1 4 2";
    }
    else{
      int q = n/5;
      for(i=0;i<q;i++){
        for(j=0;j<5;j++){
          a[5*i+j] = (5*i + b[j]);
        }
      }
      if(n%5==1){
        a[n-1] = n-1;
        a[n-2] = n-4;
        a[n-3] = n;
      }
      else if(n%5==2){
        a[n-1] = n;
        a[n-2] = n-2;
        a[n-3] = n-5;
        a[n-4] = n-1;
      }
      else if(n%5==3){
        a[n-1] = n-1;
        a[n-2] = n-3;
        a[n-3] = n-6;
        a[n-4] = n-2;
        a[n-5] = n;
      }
      else if(n%5==4){
        a[n-1] = n;
        a[n-2] = n-2;
        a[n-3] = n-4;
        a[n-4] = n-7;
        a[n-5] = n-3;
        a[n-6] = n-1;
      }
      for(i=0;i<n;i++){
        cout<<a[i]<<" ";
      }
    }
      cout<<endl;
  }
}
