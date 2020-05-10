#include<iostream>
#include <cstdio>
#include <math.h>
#include<vector>
#define ll long long
using namespace std;

int main()
{
  ll i, j, t, n, temp, num;
  //freopen("input.txt","r",stdin);
  cin>>t;
  for(i=0; i<t; i++){
    cin>>n;
    vector<int> s;
    temp = 1;
    while(n>0){
      num = n%10;
      if(num!=0){
        s.push_back(num*temp);
      }
      n = n/10;
      temp = temp*10;
    }
    cout<<s.size()<<endl;
    for(j=0;j<s.size();j++){
      cout<<s[j]<<" ";
    }
    cout<<endl;
  }
}
