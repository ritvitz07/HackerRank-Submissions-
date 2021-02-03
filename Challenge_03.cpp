#include <iostream>
using namespace std;

int main() {
    int amt;
    float bank_bal;
    cin>>amt;
    cin>>bank_bal;
    if(amt%5==0 && bank_bal>=amt+0.50){
        bank_bal=bank_bal-amt-0.50;
        cout<<bank_bal;
    }
    else{
        cout<<bank_bal;
    }
	return 0;
}
