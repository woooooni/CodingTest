#include <iostream>
#include <string>

#define MAX_ALPHABET 26
using namespace std;
int main()
{
    int numCase = 0;

    cin >> numCase;

    string strCase = "";
    cin >> strCase;

    int sum = 0;
    for (int j = 0; j < strCase.size(); ++j)
    {
        sum += strCase[j] - '0';
    }
    cout << sum << endl;
        
}