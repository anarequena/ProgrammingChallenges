#include <iostream>
#include <vector>
using namespace std;

typedef struct no {
    int min, max, min_number;
    struct no *left, *right;
} no;

void createSegTree (no *no, vector<int> list){
    // If my no is a segment of one element, the element itself is the minimum number on that range.
    if(no->min == no->max){
        no->min_number = list[no->min];
    }

    else {
        int half = (no->max - no->min)/2;
        
        no->left = new struct no;
        no->right = new struct no;

        no->left->min = no->min;
        no->left->max = no->min + half;
        no->left->min_number = 0;
        no->left->left = NULL;
        no->left->right = NULL;

        no->right->min = no->min + half + 1;
        no->right->max = no->max;
        no->right->min_number = 0;
        no->right->right = NULL;
        no->right->left = NULL;

        createSegTree(no->left, list);
        createSegTree(no->right, list);
        if(no->left->min_number < no->right->min_number){
            no->min_number = no->left->min_number;
        } else {
            no->min_number = no->right->min_number;
        }
    }
}

int findMinInRange (no *no, int min, int max) {
    if((no->min >= min) && (no->max <= max)){
        return no->min_number
    }
    if((no->min < min)&&(no->max > max)){
        return -1;
    }
    
    int half = no->min + (no->max - no->min)/2;
    if(no->min < min)
}
int main(){
    int n_num;

    cin >> n_num;

    vector<int> list;

    for(int i = 0; i < n_num; i++){
        int num;
        cin>>num;
        list.push_back(num);
    }

    no *root = new struct no;
    root->min = 0;
    root->max = n_num-1;
    root->min_number = 100000;
    root->left = NULL;
    root->right = NULL;

    createSegTree(root, list);

    int que;

    cin >> que;

    for(int i = 0; i < que; i++){
        int min, max;

        cin >> min >> max;

        int min_number = 100000;

        for(int j = 0; j < n_num; j++){
            if((list[i] >= min)&&(list[i] <= max)){
                if(list[i] < min_number){
                    min_number = list[i];
                }
            }
        }

        if(min_number == 100000){

        }
    }
}