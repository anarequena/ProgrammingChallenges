#include <iostream>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int num;
    string word;

    cin>>num;

    for(int i = 0; i < num; i++) {
        cin>>word;

        if(word.length() > 10){
            char f = word[0];
            char l = word[word.length()-1];
            ll letters = word.length() - 2;

            cout<<f<<letters<<l<<endl;
        } else {
            cout<<word<<endl;
        }
    }


}