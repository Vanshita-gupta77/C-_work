#include<iostream>
using namespace std;

int fact(int num){
    int a=1;
    for(int i=1;i<=num;i++){
        a=a*i;
    }
    return a;
}

int main(){
    int n,r;
    cin>>n>>r;
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
}