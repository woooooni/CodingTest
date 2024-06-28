#include <iostream>
#include <string>


using namespace std;

int DP[11] = {0, 1, 2, 4, };
int T;
int main(void)
{
     cin >> T;
    
    for(int i = 0; i < T; ++i)
    {
        int Number;
        cin >> Number;
        for(int j = 4; j <= Number; ++j)
        {
            DP[j] = DP[j - 1] + DP[j - 2] + DP[j - 3];
        }
        
        cout << DP[Number] << "\n";
    }
}