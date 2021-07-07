#include<iostream>
using namespace std;

void fibo(int num){
    int t1=0;
    int t2=1,near;
    for(int i=0;i<=num;i++){
        cout<<t1<<endl;
        near=t1+t2;
        t1=t2;
        t2=near;
    }
    return ;
}

int main(){
    int n;
    cin>>n;
    fibo(n);
    return 0;
}