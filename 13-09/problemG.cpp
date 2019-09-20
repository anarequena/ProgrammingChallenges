#include <iostream>
#include<string>
using namespace std;

int main(){
    int n_exp;
    char res;

    cin>>n_exp;

    for(int i = 0; i < n_exp; i++){
        string s1 = "1", s2 = "4", s3 = "78";
        int num;

        cin>>num;

        if((num == 1)||(num == 4)||(num == 78)){
            res = '+';
        } else {
            string exp = to_string(num);

            int found1 = exp.find(s1); 
            int found2 = exp.find(s2);
            int found3 = exp.find(s3);  

            if (found1 != string::npos) {
                int right = 0, left = 0;

                if((found1 >= 0) && (found1+1 < exp.length())){
                    right = stoi(exp.substr(found1 + 1));
                }

                if(found1 > 0){
                    left = stoi(exp.substr(0, found1)); 
                }

                if(right == 35){
                    res = '-';
                } else if ((left == 9) && (right == 4)){
                    res = '*';
                } else if (left == 190) {
                    res = '?';
                }
            }
            
            if (found2 != string::npos) {
                int right = 0, left = 0;
                
                if((found2 >= 0)&&(found2+1 < exp.length())){
                    right = stoi(exp.substr(found2 + 1));
                }

                if(found2 > 0){
                    left = stoi(exp.substr(0, found2)); 
                }

                if(right == 35){
                    res = '-';
                } else if ((left == 9) && (right == 4)){
                    res = '*';
                } else if (left == 190) {
                    res = '?';
                }
            }
            
            if (found3 != string::npos) {
                int right = 0, left = 0;
                
                if((found3 >= 0) && (found3+2 < exp.length())){
                    right = stoi(exp.substr(found3 + 2));
                }

                if(found3 > 0){
                    left = stoi(exp.substr(0, found3)); 
                }

                if(right == 35){
                    res = '-';
                } else if ((left == 9) && (right == 4)){
                    res = '*';
                } else if (left == 190) {
                    res = '?';
                }
            }
        }

        cout<<res<<endl;
    }

}