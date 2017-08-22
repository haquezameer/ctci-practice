#include<bits/stdc++.h>

using namespace std;

int main(){
  unordered_map <int, char > m;
  char str1[10],str2[10];
  int str_sz,ind,c_count=0;
  cin>>str1;
  cin>>str2;
  cin>>str_sz;
  for(int i=0;i<str_sz;i++){
    ind = str1[i] - '0';
    m.insert(make_pair(ind,str1[i]));
  }
  unordered_map <int, char>::iterator it;
  for(int i=0;i<str_sz;i++){
    ind = str2[i] - '0';
    if(m.at(ind)){
      cout<<"present";
    }
    else{
      return 0;
    }
  }
  return 0;
}
