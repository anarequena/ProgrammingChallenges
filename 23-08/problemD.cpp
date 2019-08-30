#include <iostream>
using namespace std;
#define MAXDIGITS 251

typedef struct {
    char digits[MAXDIGITS];
    int sign;
    int lastdigit;
} number;


void find_lastdigit(number *n){
    n->lastdigit = -1;

    while((n->digits[n->lastdigit+1] != '\0')){
        n->lastdigit++;
        cout << n->lastdigit << "\n";
    }

    if((n->lastdigit == 0) && (n->digits[0] == 0))
        n->sign = 1;
}

void addNumber(number *a, number *b, number *res){
    int i, carry;

    res = new struct number;
    for(i = 0; i < MAXDIGITS; i++) res->digits[i] = (char) 0;
    res->lastdigit = -1;
    res->sign = 1;

    if(a->sign == b->sign) res->sign == a->sign;
    else {
        if(a->sign == -1)
    }
}

void mulNumber(number *a, number *b, number *res){
    number row;
    int i, j, k, carry = 0;

    res = new struct number;
    for(i = 0; i < MAXDIGITS; i++) res->digits[i] = (char) 0;
    res->lastdigit = a->lastdigit > b->lastdigit ? a->lastdigit : b->lastdigit;
    res->sign = a->sign*b->sign;

    if((a->lastdigit == 0)||(b->lastdigit == 0)){
        res->lastdigit == 0;
        return;
    }

    row = *a;

    number *tmp = new struct number; 
    for(i = 0; i < MAXDIGITS; i++) tmp->digits[i] = (char) 0;
    tmp->lastdigit = res->lastdigit > row->lastdigit ? res->lastdigit : row->lastdigit;
    tmp->sign = 1;

    for(i = 0; i <= b->lastdigit; i++){
        for(j = 0; j <= a->lastdigit; j++){
            temp->
        }
    }
}

int main(){
    number *first = new number;
    number *second = new number;

    for(int i = 0; i < MAXDIGITS; i++) first->digits[i] = (char) 0;
    first->lastdigit = -1;
    first->sign = 1;

    for(int i = 0; i < MAXDIGITS; i++) second->digits[i] = (char) 0;
    second->lastdigit = -1;
    second->sign = 1;

    do {
        cin.getline(first->digits, MAXDIGITS+1);
        find_lastdigit(first);
        
        if(first->lastdigit >= 0){
            cin.getline(second->digits, MAXDIGITS+1);
            find_lastdigit(second);
        }       

    } while(first->lastdigit >= 0);
}