#include<bits/stdc++.h>
using namespace std;
void TOH(int n, string a, string b, string c){
    if(n>0){
        TOH(n-1,a,c,b);
        cout<<"Move"<<" "<<n<<" "<<"from"<<" "<<a<<" "<<"to"<<" "<<c<<endl;
        TOH(n-1,b,a,c);
    }
}
int main(){
    int test_cases;
    cin>>test_cases;
    for(int i = 0; i<test_cases;i++){
        int n;
        string a,b,c;
        a = "A";
        b = "B";
        c = "C";
        cin>>n;
        double res = pow(2,n);
        cout<<res-1<<endl;
        TOH(n,a,b,c);
    }
}