#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    char alphabet = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << alphabet << " ";
            alphabet = alphabet + 1;
        }
        cout << endl;
    }
    return 0;
}
