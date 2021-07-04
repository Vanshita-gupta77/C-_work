#include<iostream>
using namespace std;

int main(){
    int n,bin=0,r,rev=0,x;
    cin>>n;
    while(n!=0){
        r=n%2;
        bin=bin*10+r;
        n=n/2;
    }
    while(bin!=0){
        x=bin%10;
        rev=rev*10+x;
        bin=bin/10;
    }
    cout<<rev<<endl;
    return 0;
}