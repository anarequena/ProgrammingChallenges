#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int checkHotel(int people, int budget, int weeks) {
    int price;

    cin>>price;

    price *= people;
    int beds[weeks];
    int okay = 0;

    for(int j = 0; j < weeks; j++){
        cin>>beds[j];
        if(beds[j] >= people)
            okay = 1;
    }

    if(price > budget)
        return -1;

    if(okay){
        return price;
    }

    return -1;
}

int main(){
    int people, budget, hotels, weeks;

    while(scanf("%d %d %d %d\n", &people, &budget, &hotels, &weeks) != EOF){
        int lowerPrice = budget+1;

        for(int i = 0; i < hotels; i++){
            int price;

            price = checkHotel(people, budget, weeks);

            if(price != -1){
                lowerPrice = min(lowerPrice, price);
            }
        }

        if(lowerPrice == budget+1) {
            cout<<"stay home"<<endl;
        } else {
            cout<<lowerPrice<<endl;
        }
    }

    return 0;
}