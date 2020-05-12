#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pairs;

#define max 200002

int spf[max];
int a[100003];

void smallestpf(){
  int i,j;

  for(i=1;i<max;i++){
    spf[i] = i;
  }

  for(i=2;i<max;i+=2){
    spf[i] = 2;
  }

  for(i=2;i*i<max;i++){
    if(spf[i]==i){
      j=i*i;
      while(j<max){
        if(spf[j]==j)
          spf[j]=i;
        j+=i;
      }
    }
  }
}

vector<int> pf(int n){
  vector<int> a;
  while(n!=1){
    a.push_back(spf[n]);
    n = n/spf[n];
  }
  return a;
}

void solve(){
  ll n,i,j,ans=1,current,count,tem;

  cin>>n;
  for(i=1;i<=n;i++){
    cin>>a[i];
  }
  map<int,vector<int>> mapping;

  for(i=1;i<=2;i++){
    vector<int>pfactors = pf(a[i]);
    //cout<<"Prime factors "<<a[i]<<endl;
    current = 1;
    count = 0;
    for(j=0;j<pfactors.size();j++){
      //cout<<pfactors[j]<<endl;
      if(current==pfactors[j]){
        count++;
      }
      else{
        mapping[current].push_back(count);
        current = pfactors[j];
        count = 1;
      }
    }
    mapping[current].push_back(count);
  }

  vector<int> fac;
  for (auto it : mapping){
    fac.push_back(it.first);
  }

  for(i=3;i<=n;i++){
    for (int it=0;it<fac.size();it++){
      int j = fac[it];
      count = 0;
      tem = a[i];
      //cout<<"tem "<<tem<<" j = "<<j<<endl;

      while(j!=1 && tem%j==0){
        count++;
        tem=tem/j;
      }
      //cout<<"tem "<<tem<<" count = "<<j<<endl;
      if(count>0){
        mapping[j].push_back(count);
      }
    }
  }

  for(auto it : mapping){
    //cout<<it.first<<" "<<it.second.size()<<endl;
    if(it.second.size() == n){
      sort(it.second.begin(),it.second.end());
      ans = ans * (long long)pow(it.first, it.second[1]);
    }
    else if(it.second.size() == (n-1)){
      sort(it.second.begin(),it.second.end());
      ans = ans * (long long)pow(it.first, it.second[0]);
    }
  }
  cout<<ans<<endl;
}

int main()
{
  ll i,t;
  freopen("input.txt","r",stdin);
  //cin >> t;
  //for(i=0; i<t; i++){
  smallestpf();
  solve();
  //}
}
