#include <iostream>
using namespace std;

int main(){
int n =4; 
for(int i = 0; i <= n-1; i++ ){
    char ch = 'a';
    for(int j =0; j <= n-1; j++){
        cout << ch << " ";
        ch = ch + 1;
    }
    cout << endl;
}
}