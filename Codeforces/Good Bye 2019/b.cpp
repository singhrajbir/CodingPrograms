#include<iostream>
#include<math.h>
using namespace std;
int a[200005];
int main()
{
  #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
  #endif
  int t, n, temp;
  cin >> t;
  for(int i=0; i<t; i++)
  {
    cin>>n;
    temp = 0;
    for(int j=1; j<=n; j++)
    {
      cin>>a[j];
    }
    for(int j=1; j<n; j++)
    {
      if( abs(a[j]-a[j+1]) >=2 )
      {
        cout<< "YES" <<endl;
        cout<<j<<" "<<(j+1)<<endl;
        temp = 1;
        break;
      }
    }
    if(temp == 0)
    {
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
