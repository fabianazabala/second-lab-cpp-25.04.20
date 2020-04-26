#include <iostream>

using namespace std;

int main(void)
{

    int *pNumbers = new int[5];
    int *p = pNumbers;

    for (int i = 0; i < 5; i++)
    {
        cout << "Insert value[" << i << ":] " << endl;
        cin >> *p++;
    }

    cout << "output " << endl;
    p = pNumbers;
    for (int i = 0; i < 5; i++)
        cout << *p++ << endl;
        
    cout << "reverse " << endl;
    for (int i = 0; i < 5; i++)
        cout << *--p << endl;
}