#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        if (x <= 1399 or x < 0)
        {
            cout << "Division 4" << endl;
        }
        else if (x >= 1400 and x <= 1599)
        {
            cout << "Division 3" << endl;
        }
        else if (x >= 1600 and x <= 1899)
        {
            cout << "Division 2" << endl;
        }
        else if (x >= 1900)
        {
            cout << "Division 1" << endl;
        }
    }

    return 0;
}