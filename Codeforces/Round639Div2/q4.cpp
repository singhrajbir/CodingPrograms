#include<iostream>
#include <cstdio>
#include <math.h>
#define ll long long
using namespace std;
bool b[1000][1000];
int done[1000][1000];
int row[1000];
int col[1000];

int rows[1000];
int cols[1000];

void traverseGraph(int i, int j, int n, int m){
  //cout<<"Hi"<<endl;
  if(i<0 || i>=n || j<0 || j>=m || (b[i][j] == false) || (done[i][j] == 1)){
    return;
  }
  done[i][j] = 1;
  traverseGraph(i+1,j,n,m);
  traverseGraph(i-1,j,n,m);
  traverseGraph(i,j+1,n,m);
  traverseGraph(i,j-1,n,m);
}

int main()
{
  ll i, j, n, m, ans, temp, start, count;
  string s;
  freopen("input.txt","r",stdin);
  cin >> n>>m;
  for(i=0; i<n; i++){
    for(j=0;j<m;j++){
      done[i][j] = 0;
    }
  }
  for(i=0; i<n; i++){
    row[i] = 0;
  }
  for(j=0;j<m;j++){
    col[j] = 0;
  }

  for(i=0; i<n; i++){
    cin>>s;
    for(j=0; j<m; j++){
      if(s[j] == '#'){
        b[i][j] = true;
        row[i]++;
        col[j]++;
        rows[i]++;
        cols[j]++;
      }
      else{
        b[i][j] = false;
      }
    }
  }

  for(i=0; i<n; i++){
    for(j=0;j<m;j++){
      if((row[i] == 0 && col[j] == 0))
      {
        rows[i]++;
        cols[j]++;
      }
    }
  }

  for(i=0; i<n; i++){
    for(j=0;j<m;j++){
      if((rows[i] == 0 || cols[j] == 0))
      {
        cout<<"-1"<<endl;
        return 0;
      }
    }
  }

  for(i=0 ; i<n; i++){
      start = 0;
      count = 0;
      for(j=0; j<m; j++){
        if(b[i][j] == true){
          if(count > 0)
          {
            cout<<"-1"<<endl;
            return 0;
          }
          else{
            start = 1;
            count = 0;
          }
        }
        else{
          if(start == 1){
            count++;
          }
        }
      }
  }

  for(j=0 ; j<m; j++){
      start = 0;
      count = 0;
      for(i=0; i<n; i++){
        if(b[i][j] == true){
          if(count > 0)
          {
            cout<<"-1"<<endl;
            return 0;
          }
          else{
            start = 1;
            count = 0;
          }
        }
        else{
          if(start == 1){
            count++;
          }
        }
      }
  }

  ans = 0;
  for(i=0; i<n; i++){
    for(j=0;j<m;j++){
      if(b[i][j] == true && done[i][j] == 0){
        traverseGraph(i,j,n,m);
        ans++;
        //cout<<ans<<endl;
      }
    }
  }
  cout<<ans<<endl;

}
