#include<iostream>
#include <cstdio>
#include <math.h>
#include<vector>
#define ll long long
using namespace std;

int main()
{
  ll i, j, t, n, k, temp, num;
  freopen("input.txt","r",stdin);
  cin>>t;
  for(i=0; i<t; i++){
    cin>>n>>k;
    if((n%2==0) && (k%2)==0){
      if(k>n){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
        for(j=1;j<k;j++){
          cout<<"1 ";
        }
        cout<<(n-(k-1))<<endl;
      }
    }
    else if(n%2!=0 && k%2!=0){
      if(k>n){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
        for(j=1;j<k;j++){
          cout<<"1 ";
        }
        cout<<(n-(k-1))<<endl;
      }
    }
    else if(n%2==0 && k%2!=0){
      if(2*k>n){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
        for(j=1;j<k;j++){
          cout<<"2 ";
        }
        cout<<(n - 2*(k-1))<<endl;
      }
    }
    else{
      cout<<"NO"<<endl;
    }
  }
}
