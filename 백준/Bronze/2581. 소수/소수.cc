#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> PrimaryNumbers;


int main(void)
{
    int N, M;
    cin >> M >> N;
    
    int Sum = 0;
    
    for(int i = M; i <= N; ++i)
    {
        int Count = 0;
        for(int j = 1; j <= i; ++j)
        {
            if(i % j == 0)
            {
                Count++;
            }
        }
        
        if(2 == Count)
        {
            PrimaryNumbers.push_back(i);
        }
    }
    
    if(0 == PrimaryNumbers.size())
    {
        cout << -1;
        return 0;
    }
    
    for(int i = 0; i < PrimaryNumbers.size(); ++i)
    {
        Sum += PrimaryNumbers[i];
    }
    
    cout << Sum << endl;
    cout << PrimaryNumbers[0] << endl;
}