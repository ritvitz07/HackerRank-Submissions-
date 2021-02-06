#include<iostream>
using namespace std;

int main(){
    int N,temp=1;
    cin>>N;
    for(int i=1;i<=10;i++){
        if(N%i==0){
             if(i>temp){
            temp=i;
        }
        }
    }
       cout<<temp;
    return 0;
}