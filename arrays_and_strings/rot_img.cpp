#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int matrix[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>matrix[i][j];

    int layer,offset,top,first,last;
    for(layer=0;layer<(n/2);layer++){
        first = layer;
        last = n-1-first;
        for(int i=first;i<last;i++){
            offset = i - first;
            top = matrix[first][i];
            matrix[first][i] = matrix[last-offset][first];
            matrix[last-offset][first] = matrix[last][last-offset];
            matrix[last][last-offset] = matrix[i][last];
            matrix[i][last] = top;
        }
    }

    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}