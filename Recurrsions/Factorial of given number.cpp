#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    return fact(n-1)*n;
}
int main(){
    int n, res;
    cout<<"Enter an number : ";
    cin>>n;
    res = fact(n);
    cout<<res;
}