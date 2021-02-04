#include<iostream>
using namespace std;

int main(){

    int T,n,m;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>n;
        int sum=0;
    while(n>0){
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    cout<<"sum is : "<<sum<<endl;
    }
    
    return 0;
}