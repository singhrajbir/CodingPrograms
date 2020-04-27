#include<iostream>
#include <cstdio>
#define ll long long
using namespace std;
int main()
{
  ll t, i, j, len, temp;
  string s;
  //freopen("input.txt","r",stdin);
  cin >> t;
  for(i=0; i<t; i++){
    cin>>s;
    len = s.length();
    temp = 0;
    for(j=0;j<len-1;j++){
      if(s[j]!=s[j+1]){
        temp = 1;
        break;
      }
    }

    if(temp == 0){
      cout<<s<<endl;
      continue;
    }
    if(s[0]=='0'){
      for(j=0;j<len;j++){
        cout<<"01";
      }
      cout<<endl;
    }
    else{
      for(j=0;j<len;j++){
        cout<<"10";
      }
      cout<<endl;
    }


  }
}
