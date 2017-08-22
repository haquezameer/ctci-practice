#include<bits/stdc++.h>

using namespace std;

int main(){
  char str[10];
  cin>>str;
  int n,char_set[128];
  cin>>n;
  for(int i=0;i<n;i++){
    int val = str[i] - '0';
    if(char_set[val])
    {
      cout<<val<<endl;
      cout<<"false";
      return 0;
    }
    char_set[val] = 1;
  }
  cout<<"true";
  return 0;
}
