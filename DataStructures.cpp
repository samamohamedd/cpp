#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> my_vector;
    my_vector.push_back(2);
    my_vector.push_back(3);
    my_vector.push_back(6);
    my_vector.pop_back();

    int size = my_vector.size();
    int cap = my_vector.capacity();
    cout << size;

    return 0;
}