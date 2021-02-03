// bits/stdc++.h works in linux. 
// It loads most of the libraries of C++ required.
#include <bits/stdc++.h> 

using namespace std;

int main() {
	int T,a,b,sum=0;
	cin>>T;
	while(T){
	cin>>a>>b;
    sum=a+b;
    cout<<sum<<endl;
    T--;
	}
	return 0;
}