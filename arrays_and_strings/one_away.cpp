#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[128] = {0},match=0;
    string s1,s2;
    cin>>s1>>s2;
    string::iterator it;
    for(it=s1.begin();it!=s1.end();it++){
        int val = *it -'0';
        arr[val] = 1; 
    }
    for(it=s2.begin();it!=s2.end();it++){
        int val = *it - '0';
        if(arr[val]){
            match++;
        }
    }
    int len = s1.length() - s2.length();
    len = abs(len);
    if(len == 1){
        if(s1.length()>s2.length()){
            if(abs(s1.length() - match) == 1)
            cout<<"true";
        }
        else{
            if(abs(s2.length() - match) == 1)
                cout<<"true";
            else
                cout<<"false";
        }
            
    }
    else if(len == 0){
        if(match == s1.length() || (s1.length() - match) == 1){
            cout<<"true";
        }
        else
            cout<<"false";
    }
    else  
        cout<<"false";
    return 0;
}