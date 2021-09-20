#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Pair{
    int min;
    int max;
};
struct Pair getMinMax(vector<int> v,int n){
    Pair minmax;
    int i;
    if(n%2 == 0){
        if(v[0]>v[1]){
            minmax.max = v[0];
            minmax.min = v[1];
        }
        else{
            minmax.min = v[0];
            minmax.max = v[1];
        }
        i = 2;
    }
    else{
        minmax.min = v[0];
        minmax.max = v[0];
        i = 1;
    }
    while(i<n-1){
        if(v[i]>v[i+1]){
            if(v[i] > minmax.max){
                minmax.max = v[i];
            }
            if(v[i+1]<minmax.min){
                minmax.min = v[i+1];
            }
        }
        else{
            if(v[i+1]>minmax.max){
                minmax.max = v[i+1];
            }
            if(v[i]<minmax.min){
                minmax.min = v[i];
            }
        }
        i += 2;
    }
    return minmax;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    Pair minmax = getMinMax(v,n);
    cout<<"Minimum number is : "<<minmax.min<<endl;
    cout<<"Maximum number is : "<<minmax.max<<endl;
}
