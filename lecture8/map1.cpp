#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> numbers;
    numbers[0] = "zero";
    numbers[1] = "one";

    map<int, string> numbers2 {{2, "two"}, {3, "three"}};

    cout << numbers[0] << " " << numbers[1] << " " << numbers2[2] << "\n";
    cout << numbers[2]; // creates the element if it doesn't exist

    cout << numbers.size();
}
