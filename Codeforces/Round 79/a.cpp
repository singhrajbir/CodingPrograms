#include<iostream>
using namespace std;
int main()
{
  int t, sum, largest, r, g, b;
  cin >> t;
  for(int i=0; i<t; i++)
  {
    sum = 0;
    largest = 0;
    cin>>r>>g>>b;
    if((r+g)>=(b-1) && (r+b)>=(g-1) && (b+g)>=(r-1))
    {
      cout<<"Yes"<<endl;
    }
    else
    {
      cout<<"No"<<endl;
    }

  }

}
