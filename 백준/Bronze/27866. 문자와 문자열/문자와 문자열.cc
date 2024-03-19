
#include <iostream>
#include <string>

#define MAX_ALPHABET 26
using namespace std;
int main()
{
    string input;
    int index = 0;

    cin >> input >> index;

    cout << input[index - 1];
}