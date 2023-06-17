#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<long long>> v(n, vector<long long>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
        }
    }

    for(int i=0; i<n; i++){
        long long currSum = 0;
        for(int j=0; j<m; j++){
            currSum+= v[i][j];
        }
        cout<<currSum<<endl;
    }
}

