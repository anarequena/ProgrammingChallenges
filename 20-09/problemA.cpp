#include <iostream>
using namespace std;

typedef long long ll;

ll countDigits(ll num){
    ll count = 0;

    while(num){
        count += num%10;
        num = num/10;
    }

    return count;
}

int main() {
    ll num;

    cin>>num;

    while(num != 0) {
        ll num2 = num;

        while(num2/10){
            num2 = countDigits(num2);
        }

        cout<<num2<<endl;

        cin>>num;
    }

}