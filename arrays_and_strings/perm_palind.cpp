#include<bits/stdc++.h>

using namespace std;

/*Solution not taking into considerations other string delimiters than whitespace and expects input to be in lowercase and case insensitive*/ 
int main()
{
    string str;
    getline(cin,str);
    int hash[128] = {0};
    int diff=0;
    for(int it=0;it<str.length();it++){
        int val = str[it] - '0';
        hash[val]++; 
    }
     for(int i=0;i<128;i++)
         if(hash[i]%2 && i!=16)
            diff++;
    if(diff>1)
        cout<<"not palindrome";
    else
        cout<<"palindrome";
    return 0;
}