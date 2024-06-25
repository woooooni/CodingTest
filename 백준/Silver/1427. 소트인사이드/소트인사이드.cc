#include <string>
#include <iostream>
#include <algorithm>

using namespace std;


int main(void)
{
    int N;
    cin >> N;
    
    string Result = to_string(N);
    sort(Result.begin(), Result.end(), greater_equal<char>());
    
    for(int i = 0; i < Result.length(); ++i)
    {
        cout << Result[i];
    }
    
}