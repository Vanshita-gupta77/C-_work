#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"0\n";
    }
    else if(n==2){
        cout<<"0 1\n";
    }
    else{
        int a=0,b=1,c=0,i=2;
        cout<<a<<" "<<b<<" ";
        while(i<n){
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
            i++;
        }
        cout<<"\n";
    }
    return 0;
}