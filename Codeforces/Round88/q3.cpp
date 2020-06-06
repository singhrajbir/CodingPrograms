#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pairs;

void solve(){
  ll c,h,t,i,j,num,den,x;
  double t1,t2;
  cin>>h>>c>>t;
  if(t<=(h+c)/2){
    cout<<"2"<<endl;
  }
  else{
    num=(t-c);
    den=(2*t-h-c);

    x = num/den;
    t1 = (double)(x*h + (x-1)*c)/(2*x-1);
    x++;
    t2 = (double)(x*h + (x-1)*c)/(2*x-1);
    if(abs(t1-t)>abs(t2-t)){
      cout<<(2*x-1)<<endl;
    }
    else
      cout<<(2*(x-1)-1)<<endl;
  }
}

int main()
{
  ll i,t;
  //freopen("input.txt","r",stdin);
  cin >> t;
  for(i=0; i<t; i++){
    solve();
  }
}
