#include<iostream>
using namespace std;

int main(){

    int a,b,T,temp;
    cin>>T;
    while(T--){
        cin>>a>>b;
        temp=a%b;
        cout<<temp<<endl;
    }
    return 0;
}