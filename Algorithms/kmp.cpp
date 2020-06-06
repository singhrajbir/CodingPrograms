#include<iostream>
#include <cstdio>
#define ll long long
using namespace std;

void kmp(string txt, string pat, int* lcs ){
  int i=0,counter=0;
  while(i<txt.length()){
    if(txt[i] == pat[counter]){
      counter++;
      i++;
    }
    else{
      if(counter==0){
        i++;
        //cout<<"Counter = 0"<<endl;
      }
      else{
        counter = lcs[counter-1];
        //cout<<"no match "<<counter<<endl;
      }
    }
    if(counter == pat.length())
    {
      cout<<"Found at "<<(i-counter)<<endl;
      counter = lcs[counter-1];
    }
  }
}

void findlcs(string s, int* lcs ){
  lcs[0] = 0;
  int i=1;
  int counter=0;
  while(i<s.length()){
    if(s[i]==s[counter]){
      counter++;
      lcs[i] = counter;
      i++;
    }
    else{
      if(counter==0){
        lcs[i]=0;
        i++;
      }
      else{
        counter = lcs[counter-1];
      }
    }
  }
}
int main()
{
  //ll n;
  string txt,pat;
  //freopen("input.txt","r",stdin);
  cin>>txt>>pat;
  int lcs[pat.length()];
  findlcs(pat, lcs);
  for(ll i=0; i<pat.length(); i++){
   cout<<lcs[i];
  }
  cout<<endl;
  kmp(txt,pat,lcs);
  return 0;
}
