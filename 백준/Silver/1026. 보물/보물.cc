#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> Left;
vector<int> Right;

int main(void)
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    int Input;
    
    for(int i = 0; i < N; ++i)
    {
        cin >> Input;
        Left.push_back(Input);
    }
    
    for(int i = 0; i < N; ++i)
    {
        cin >> Input;
        Right.push_back(Input);
    }
    
    sort(Left.begin(), Left.end());
    sort(Right.begin(), Right.end(), greater<int>());
    
    long long int Result = 0;
    for(int i = 0; i < N; ++i)
    {
        Result += ((long long int)Left[i] * (long long int)Right[i]);
    }
    
    cout << Result;
    
}