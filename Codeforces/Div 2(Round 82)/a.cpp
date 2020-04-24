#include<iostream>
#include <math.h>
using namespace std;
int main()
{
  long long t,n,g,b,i,j,half;
  cin >> t;
  for(j=0; j<t; j++)
  {
    cin>>n>>g>>b;
    half = (long long)ceil(n/2.0);
    //cout<< half<<endl;
    long long numOfGunits = (long long)ceil((double)half/g);
    if(((numOfGunits-1)*b + half) <= n)
    {
      cout<<n<<endl;
    }
    else{
      long long extra = (half + (numOfGunits-1)*b);
      //cout<<extra<<endl;
      cout << extra <<endl;
    }
  }
  return 0;
}
