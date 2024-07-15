#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int N;
int Numbers[9];

int main(void)
{
    cin >> N;
    
    for(int i = 1; i <= N; ++i)
    {
        Numbers[i - 1] = i;
    }
    
    do
    {
        for(int i = 0; i < N; ++i)
        {
            cout << Numbers[i] << " ";
        }
        cout << "\n";
    }while(next_permutation(Numbers, Numbers + N));
}