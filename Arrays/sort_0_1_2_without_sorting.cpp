// sort 0 1 2 without using sorting algorithms
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> V;
    for(int i = 0; i<n; i++){
        int a;
        cin>>a;
        V.emplace_back(a);
    }
    int x = count(V.begin(), V.end(), 0);
    int y = count(V.begin(), V.end(), 1);
    int z = count(V.begin(), V.end(), 2);
    V.erase(V.begin(), V.end());
    for(int i = 0; i<x; i++){
        V.emplace_back(0);
    }
    for(int i = 0; i<y; i++){
        V.emplace_back(1);
    }
    for(int i = 0; i<z; i++){
        V.emplace_back(2);
    }
    for(auto i:V){
        cout<<i<<" ";
    }
}
/*----------------------------------------------------------------
OUTPUT:
6
0 1 2 0 1 2
0 0 1 1 2 2 
*/