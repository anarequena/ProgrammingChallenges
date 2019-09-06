/*
Polycarp is reading a book consisting of n pages numbered from 1 to n. 
Every time he finishes the page with the number divisible by m, he writes 
down the last digit of this page number. For example, if n=15 and m=5, 
pages divisible by m are 5,10,15. Their last digits are 5,0,5 correspondingly, 
their sum is 10.
Your task is to calculate the sum of all digits Polycarp has written down.
You have to answer q independent queries.

Input:
The first line of the input contains one integer q (1≤q≤1000) — the number of queries.
The following q lines contain queries, one per line. Each query is given as two integers 
n and m (1≤n,m≤1016) — the number of pages in the book and required divisor, respectively.

Output:
For each query print the answer for it — the sum of digits written down by Polycarp.
 */
 
#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    int queries;

    cin>>queries;

    for(int i = 0; i < queries; i++){
        ll n, m, sum = 0, sum_resto = 0;

        cin>>n>>m;

        // Number of pages divisible for m.
        ll div = n/m;
        ll div10 = div/10;
        ll resto = div%10;

        for(int j = 0; (j < 10) && (j <= div); j++){
           ll number = j*m;

            sum += number%10;
            if(j <= resto){
                sum_resto += number%10;
            }
        }

        if(div10>0){
            sum *= div10;
            sum += sum_resto;
        }
        cout<<sum<<endl;
    }
}