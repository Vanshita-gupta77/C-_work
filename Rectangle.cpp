#include<iostream>
using namespace std;

int main(){
    int row,colum;
    cin>>row>>colum;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=colum;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}