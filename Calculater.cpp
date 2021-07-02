#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter two numbers-";
    cin>>num1>>num2;
    char c;
    cout<<"Enter operations here-";
    cin>>c;

    switch (c)
    {
    case '+':
        cout<<num1+num2;
        break;
    case '-':
        cout<<num1-num2;
        break;
    case '*':
        cout<<num1*num2;
        break;
    case '/':
        cout<<num1/num2;
        break;
    
    default:
        cout<<"Select a valid operator"<<endl;
        break;
    }
    return 0;
}