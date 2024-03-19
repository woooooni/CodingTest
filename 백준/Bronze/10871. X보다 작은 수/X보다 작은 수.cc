
#include <iostream>
#include <string>

#define MAX_ALPHABET 26
using namespace std;
int main()
{
    int N, X;

    cin >> N >> X;

    for (int i = 0; i < N; ++i)
    {
        int num = 0;
        cin >> num;

        if (num < X)
            cout << num << " ";
    }
}