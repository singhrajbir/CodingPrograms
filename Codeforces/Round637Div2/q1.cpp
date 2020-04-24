#include<iostream>
#include <cstdio>
#define ll long long
using namespace std;
int main()
{
  ll t, n, a, b, c, d, gmin, gmax, tmin, tmax;
  freopen("input.txt","r",stdin);
  cin >> t;
  for(int i=0; i<t; i++){
    cin>>n>>a>>b>>c>>d;
    gmin = (a-b);
    gmax = (a+b);
    tmin = (c-d);
    tmax = (c+d);

    if((gmin*n)>tmax || (gmax*n)<tmin){
      cout<<"No"<<endl;
    }
    else{
      cout<<"Yes"<<endl;
    }
  }
}
