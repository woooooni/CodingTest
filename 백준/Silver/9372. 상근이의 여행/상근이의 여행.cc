#include <string>
#include <iostream>
#include <vector>
using namespace std;


int main(void)
{
    int T;
    cin >> T;
    
    for(int i = 0; i < T; ++i)
    {
        int N, M;
        cin >> N >> M;
        
        int From, To;
        
        for(int  j = 0; j< M; ++j)
        {
            cin >> From >> To;
        }
        
        cout << N - 1 << "\n";
        
    }
    
}