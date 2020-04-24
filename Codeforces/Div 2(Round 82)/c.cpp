#include<iostream>
#include <math.h>
#define ll long long
using namespace std;

struct Node{
  char a;
  int count;
  bool seen;
  struct Node* neighbour[2];
};

struct Node* NewNode(char s){
  struct Node* n = (struct Node*)malloc(sizeof(struct Node));
  n->a = s;
  n->neighbour[0] = NULL;
  n->neighbour[1] = NULL;
  return n;
}
int main()
{
  ll t,i,j,noSolution,index;
  struct Node* arr;
  string s;
  cin >> t;
  for(i=0; i<t; i++)
  {
    cin>>s;
    noSolution = 0;
    string ans = "";
    arr = new struct Node[26];
    for(j=0;j<26;j++){
      arr[j].a = char('a'+j);
      arr[j].count = 0;
      arr[j].seen = false;
      arr[j].neighbour[0] = NULL;
      arr[j].neighbour[1] = NULL;
    }
    //cout<<"Hi"<<endl;
    for(j=1;j<s.length();j++){
      if((arr[s[j-1] - 'a'].neighbour[0] != NULL && arr[s[j-1] - 'a'].neighbour[0]->a == s[j]) || (arr[s[j-1] - 'a'].neighbour[1] != NULL && arr[s[j-1] - 'a'].neighbour[1]->a == s[j]))
      {
        //cout<<"Already doen "<<s[j]<<" "<<j<<endl;
        continue;
      }
      if(arr[s[j] - 'a'].count == 2 || arr[s[j-1] - 'a'].count == 2)
      {
        //cout<<arr[s[j] - 'a'].count<<endl;
        //cout<<arr[s[j-1] - 'a'].count<<endl;
        //cout<<j<<endl;
        noSolution = 1;
        break;
      }
      if(arr[s[j-1] - 'a'].neighbour[0] == NULL)
      {
        arr[s[j-1] - 'a'].neighbour[0] = &arr[s[j] - 'a'];
      }else{
        arr[s[j-1] - 'a'].neighbour[1] = &arr[s[j] - 'a'];
      }
      arr[s[j-1] - 'a'].count++;

      if(arr[s[j] - 'a'].neighbour[0] == NULL)
      {
        arr[s[j] - 'a'].neighbour[0] = &arr[s[j-1] - 'a'];
      }else{
        arr[s[j] - 'a'].neighbour[1] = &arr[s[j-1] - 'a'];
      }
      arr[s[j] - 'a'].count++;
    }
    //cout<<"HI"<<endl;
    if(noSolution == 1)
    {
      cout<<"NO"<<endl;
      continue;
    }
    if(s.length()>1){
      noSolution = 1;
      for(j=0;j<26;j++)
      {
          if(arr[j].count == 1){
            index = j;
            noSolution = 0;
            break;
          }
      }
      if(noSolution == 1)
      {
        cout<<"NO"<<endl;
        continue;
      }
      while(true)
      {
        arr[index].seen = true;
        ans+=arr[index].a;
        if(arr[index].neighbour[0] != NULL && arr[index].neighbour[0]->seen == false){
          index = arr[index].neighbour[0]->a - 'a';
        }
        else if(arr[index].neighbour[1] != NULL && arr[index].neighbour[1]->seen == false){
          index = arr[index].neighbour[1]->a - 'a';
        }
        else{
          break;
        }
      }
    }
    for(j=0;j<26;j++){
      if(arr[j].seen == false){
        ans+= char(j+'a');
      }
    }
    cout<<"YES"<<endl;
    cout<<ans<<endl;
  }
  return 0;
}
