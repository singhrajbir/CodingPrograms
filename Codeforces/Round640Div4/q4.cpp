#include<iostream>
#include <cstdio>
#include <math.h>
#include<vector>
#define ll long long
using namespace std;

int main()
{
  ll i, j, t, n, temp, alice, bob, turn, sum, target, aa, b;
  //freopen("input.txt","r",stdin);
  cin>>t;
  for(i=0; i<t; i++){
    cin>>n;
    vector<int> a;
    for(j=0;j<n;j++){
      cin>>temp;
      a.push_back(temp);
    }
    alice = 0;
    bob = a.size()-1;
    turn = 0;
    target = 0;
    aa = 0;
    b = 0;
    while(alice<=bob){
      //cout<<alice<<" "<<bob<<endl;
      if(turn%2 == 0){
        sum = 0;
        while(sum<=target && alice<=bob){
          sum = sum + a[alice];
          alice++;
        }
        target = sum;
        aa += target;
      }
      else{
        sum = 0;
        while(sum<=target && bob>=alice){
          sum = sum + a[bob];
          bob--;
        }
        target = sum;
        b += target;
      }
      turn++;
    }
    cout<<turn<<" "<<aa<<" "<<b<<endl;
  }
}
