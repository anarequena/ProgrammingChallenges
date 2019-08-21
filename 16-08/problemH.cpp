/* You are given two list of integers. You can remove any number of elements 
 * from any of them. You have to ensure that after removing some elements both
 * of the list will contain same elements, but not necessarily in same order.
 * What is the minimum number of elements to be removed to obtain two list 
 * having same elements?

 * Input:
 * The first line of the input file contains an integer T (T ≤ 100) which 
 * denotes the total number of test cases. The description of each test case is
 * given below:
 * First line will contain two integers N (1 ≤ N ≤ 10000), the number of 
 * element in the first list and M (1 ≤ M ≤ 10000), the number of element in 
 * the second list. The next line will contain N integers representing the 
 * first list followed by another line having M elements representing the 
 * second list. Each integers in the input is 32 bit signed integer.

 * Output:
 * For each test case output a single line containing the number of elements to
 * be removed. 
 */

#include <iostream>
#include <unordered_map> 
using namespace std;

int main(){
    int num_tests;

    cin>>num_tests;

    for(int test = 0; test < num_tests; test++){
        int size_1, size_2;
        unordered_map<long long int, long long int> list;
        unordered_map<long long int, long long int>:: iterator itr; 

        cin>>size_1>>size_2;

        for(int l = 0; l < size_1; l++){
            int key;

            cin>>key;

            if (list.find(key) == list.end()){
                list[key] = 1;
            }
            else {
                list[key] += 1;
            }

        }

        for(int l = 0; l < size_2; l++){
            int key;

            cin>>key;

            if (list.find(key) == list.end()){
                list[key] = -1;
            }
            else {
                list[key] -= 1;
            }
        }

        int total = 0;

        for(itr = list.begin(); itr != list.end(); itr++){
            total += abs(itr->second);
        }

        cout<<total<<"\n";
    }
}