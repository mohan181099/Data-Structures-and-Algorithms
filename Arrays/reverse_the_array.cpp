#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    for(int i = 0; i<n/2; i++){
        int x = i;
        int y = n-i-1;
        swap(v.at(x),v.at(y));
    }
    for(auto it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
}