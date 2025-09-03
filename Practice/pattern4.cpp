#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int printValue;
    for (int i = 0; i < n; i++)
    {
        printValue = printValue + 1;
        for (int j = 0; j < printValue; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}