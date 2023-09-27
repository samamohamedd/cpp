#include <iostream>
using namespace std;

int main()
{
    int i;
    cin >> i;
    if (i > 2)
    {
        if ((i % 2) == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}