#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int x = 50;
    int y = 70;
    int temp = x;
    x = y;
    y = temp;
    const double Pi = 3.14;
    cout << "x = " << x << endl
         << "PI = " << Pi;

    cout << "Enter your Name ";
    string name;
    cin >> name;
    cout << "Hi " << name;

    int my_array[5] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(my_array) / sizeof(my_array[0]);
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Hi" << endl;
    }

    return 0;
}
