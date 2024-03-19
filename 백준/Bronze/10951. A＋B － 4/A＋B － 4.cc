
#include <iostream>
#include <string>

#define MAX_ALPHABET 26
using namespace std;
int main()
{
    while (true)
    {
        int a, b;
        cin >> a >> b;

        if (true == cin.eof())
            return 0;

        cout << a + b << endl;
    }
}