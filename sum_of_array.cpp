#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n], sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    return 0;
}