#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pairs;

void solve(){
  ll n,m,x,y,i,j,Ocount,Tcount;
  string s;
  cin>>n>>m>>x>>y;
  Ocount = 0;
  Tcount = 0;
  for(i=0;i<n;i++){
    cin>>s;
    if(m==1){
      if(s[0]=='.'){
        Ocount++;
      }
    }
    else{
      for(j=1;j<s.length();j++){
        if(s[j]=='.' && s[j-1]=='.'){
          Tcount++;
          s[j] = '*';
        }
        else if(s[j-1]=='.'){
          Ocount++;
        }
        else if(j==(s.length()-1) && s[j]=='.'){
          Ocount++;
        }
      }
    }
  }
  //cout<<Tcount<<" "<<Ocount<<endl;
  if((2*Tcount*x + Ocount*x)>(y*Tcount + Ocount*x))
  {
    cout<<(y*Tcount + Ocount*x)<<endl;
  }
  else
    cout<<(2*Tcount*x + Ocount*x)<<endl;
}

int main()
{
  ll i,t;
  freopen("input.txt","r",stdin);
  cin >> t;
  for(i=0; i<t; i++){
    solve();
  }
}
