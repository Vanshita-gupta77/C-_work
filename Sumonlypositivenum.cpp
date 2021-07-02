#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number-";
    cin>>num;
    int sum=0;
    while(num>=0){
        sum=sum+num;
        cout<<"Enter next number"<<endl;
        cin>>num;
    }
    cout<<sum<<endl;
    return 0;
}