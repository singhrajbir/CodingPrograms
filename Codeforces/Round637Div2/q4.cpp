#include<iostream>
#include <cstdio>
#define ll long long
using namespace std;
string digits[10] = {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
int diff[2005][10] = {0};
int poss[2005][2005] = {0};
int main()
{
  int n,kk,k,x,i,j,temp=0;
  freopen("input.txt","r",stdin);
  string s;
  cin>>n>>kk;

  for(i=0;i<n;i++){
    cin>>s;
    cout<<s<<endl;
    for(j=0;j<10;j++){
      for(k=0;k<7;k++){
        if(digits[j][k]=='0' && s[k]=='1'){
          diff[i][j] = -1;
          break;
        }
        if(digits[j][k]=='1' && s[k]=='0'){
          diff[i][j]++;
        }
      }
    }
  }

  poss[n][0] = 1;
  for(i=n; i>0; i--){
    for(j=0; j<=k; j++){
      if(poss[i][j] == 1){
        for(x=0;x<10;x++){
          if(diff[i-1][x]!=-1 && (j+diff[i-1][x])<=k){
            poss[i-1][j+diff[i-1][x]] = 1;
          }
        }
      }
    }
  }

  if(poss[0][kk]==0){
    cout<<"-1"<<endl;
    return 0;
  }

  for(i=0;i<n;i++){
    for(j=9;j>=0;j--){
      if(diff[i][j]!=-1 && (kk-diff[i][j])>=0 && poss[i+1][kk-diff[i][j]] == 1){
        cout<<j;
        kk = kk - diff[i][j];
        break;
      }
    }
  }
  cout<<"\n";

}
