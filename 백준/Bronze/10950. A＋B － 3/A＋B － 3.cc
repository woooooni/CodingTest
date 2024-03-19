
#include <iostream>
#include <string>

#define MAX_ALPHABET 26
using namespace std;
int main()
{
    int testNum;

    cin >> testNum;

    for (int i = 0; i < testNum; ++i)
    {
        int a, b;
        cin >> a >> b;

        cout << a + b << endl;
    }
}