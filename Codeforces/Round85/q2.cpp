#include<iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
#define ll long long
ll arr[100005];
int main()
{
  ll t, n, x, sum, index;
  //freopen("input.txt","r",stdin);
  cin >> t;
  for(int i=0; i<t; i++){
    cin>>n>>x;
    sum = 0;
    for(int j=0; j<n; j++){
      cin>>arr[j];
      sum += arr[j];
    }
    sort(arr, arr + n);
    index = 0;
    while(1){
      //cout<<n<<endl;
      if(n == 0 || sum/n >= x){
        break;
      }

      sum -= arr[index];
      index++;
      n--;
    }
    cout<<n<<endl;
  }

}
