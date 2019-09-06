/*
Polycarp analyzes the prices of the new berPhone. 
At his disposal are the prices for n last days: a1,a2,…,an, 
where ai is the price of berPhone on the day i.

Polycarp considers the price on the day i to be bad if later 
(that is, a day with a greater number) berPhone was sold at a lower price. 
For example, if n=6 and a=[3,9,4,6,7,5], then the number of days with a 
bad price is 3 — these are days 2 (a2=9), 4 (a4=6) and 5 (a5=7).

Print the number of days with a bad price.

You have to answer t independent data sets.

Input:
The first line contains an integer t(1≤t≤10000) — 
the number of sets of input data in the test. 
Input data sets must be processed independently, one after another.

Each input data set consists of two lines. The first line contains an integer n
(1≤n≤150000) — the number of days. The second line contains n integers a1,a2,…,an 
(1≤ai≤106), where ai is the price on the i-th day.

It is guaranteed that the sum of n over all data sets in the test does not exceed 150000.

Output:
Print t integers, the j-th of which should be equal to the number of days with a bad price 
in the j-th input data set.

*/

#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    ll tests;

    cin>>tests;

    for(ll i = 0; i < tests; i++){
        ll days;

        cin>>days;

        ll prices[days];

        for(int j = 0; j < days; j++){
            cin>>prices[j];
        }

        ll badDays = 0;
        ll min = prices[days-1];

        for(int k = days-2; k >= 0; k--){
            if(prices[k] > min)
                badDays+=1;
            else if (prices[k] < min)
                min = prices[k];
        }

        cout<<badDays<<endl;
    }
}