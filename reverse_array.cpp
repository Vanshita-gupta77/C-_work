#include<iostream>
using namespace std;

void reversearr(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        int tem=arr[start];
        arr[start]=arr[end];
        arr[end]=tem;
        start++;
        end--;
    }
    return;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversearr(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}