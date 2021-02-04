#include<iostream>
using namespace std;

int main(){

    int a,b,T,temp;
    cin>>T;
  /*  for(int i=0;i<T;i++){
        cin>>a>>b;
        temp=a%b;

    }*/
    while(T--){
        cin>>a>>b;
        temp=a%b;
        cout<<temp;
    }
    

    return 0;
}