#include <iostream>
using namespace std;

int main(){
    int n = 100;
    int printedValue;
    for(int i = 0; i < n; i++){
        printedValue = printedValue + 1;
        for(int j = 0; j < printedValue; j++){
            cout << printedValue << " ";
        }
        cout << endl;
    }
    return 0;
}