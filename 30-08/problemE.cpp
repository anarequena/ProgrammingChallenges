#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ll t;
    cin >> t;

    for(ll i = 0; i < t; i++){

        int n;
        cin >> n;

        cout << int((n * log10(n/M_E) + (log10(2*M_PI*n)/2))) + 1<<endl;
    }
    return 0;
}