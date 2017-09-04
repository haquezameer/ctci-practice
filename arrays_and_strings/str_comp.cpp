#include<bits/stdc++.h>

using namespace std;

int main(){
    string str,nstr;
    cin>>str;
    string::iterator prev,cur,it;
    cur=str.begin();
    prev=cur;
    int count=0;
    for(it=str.begin();it!=str.end();it++){
        cur=it;
        if(*prev!=*cur){
            nstr=nstr+(*prev)+to_string(count);
            //cout<<nstr<<endl;
            count=0;
            prev=cur;
        }
        count++;
    } 
    nstr=nstr+(*prev)+to_string(count);
    if(nstr.length()<str.length())
        cout<<nstr;
    else
        cout<<str;
    return 0;
}