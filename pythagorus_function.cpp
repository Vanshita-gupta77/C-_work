#include<iostream>
using namespace std;

bool pyth(int x,int y,int z){
    int a,b,c;
    a=max(x,max(y,z));
    
    if(a==x){
       b=y;
       c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a==b*b+c*c){
        return true;
    }
    return false;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(pyth(a,b,c)){
        cout<<"verify"<<endl;
    }
    else{
        cout<<"Not verify"<<endl;
    }
    return 0;
}