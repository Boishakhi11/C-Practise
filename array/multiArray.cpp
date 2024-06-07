#include<iostream>
#include<string>
using namespace std;

int main () {
    string letters[2] [3] = {{"a" , "b", "c"}, {"d", "e", "f"}};

    for (int i= 0; i < 2; i++) {
        for(int j= 0; j < 3 ; j ++) {
            cout<< letters[i] [j]<< endl; 
        }
    }
    return 0;
};