#include<iostream>
using namespace std;

int add(int num){
    int sum=0;
    for(int i=0;i<=num;i++){
        sum=sum+i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int ans=add(n);
    cout<<ans<<endl;
    return 0;
}