/*
Byteman has a collection of N squares with side 1. How many different rectangles can he form using these squares?

Two rectangles are considered different if none of them can be rotated and moved to obtain the second one. During rectangle construction, Byteman can neither deform the squares nor put any squares upon any other ones.
Input

The first and only line of the standard input contains one integer N (1 <= N <= 10000).
Output

The first and only line of the standard output should contain a single integer equal to the number of different rectangles that Byteman can form using his squares. 

PS: squares are rectangles too.
*/
#include <iostream>
using namespace std;

int main(){
    int count_rect, n, i, j;

    cin>>n;

    // at least n rectangles of size 1xn_i can be made.
    count_rect = n;

    for(i = 2; i < n; i++){
        for(j = i; j < n; j++){
            if(i*j > n)   
                break;
                
            count_rect+=1;
        }
    }

    cout<<count_rect<<endl;
}