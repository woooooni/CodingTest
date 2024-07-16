#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> Numbers;

int main(void)
{
    int N;
    cin >> N;
    
    Numbers.reserve(N);
    for(int i =0; i < N; ++i)
    {
        int Input;
        cin >> Input;
        Numbers.push_back(Input);
    }
    
    sort(Numbers.begin(), Numbers.end());
    
    int MaxNum = 0;
    do
    {
        int Sum = 0;
        for(int i = 0; i < Numbers.size() - 1; i++)
        {
            Sum += abs((Numbers[i] - Numbers[i + 1]));
        }
        MaxNum = max(Sum, MaxNum);
        
    } while(next_permutation(Numbers.begin(), Numbers.end()));
    
    cout << MaxNum;
}