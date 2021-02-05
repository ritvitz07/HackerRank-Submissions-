#include<iostream>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
         cin>>n;
         cpp_int f=1; 
        while(n>0){
            f=f*n;
            n--;
        }
         cout<<f<<endl;
    }
    
    return 0;
}