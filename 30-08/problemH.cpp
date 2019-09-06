#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ll s, x;
    cin >> s >> x;

    cout << int(log10(s)/log10(x)) + 1 <<endl;
  
    return 0;
}