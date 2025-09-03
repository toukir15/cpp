#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int value;
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++){
            value = value + 1;
            cout << value << " ";
        }
       cout << endl;
    }
};