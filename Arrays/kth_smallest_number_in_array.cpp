#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    vector<int> A;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    sort(A.begin(),A.end());
    cout<<A.at(k-1);
}