#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int N, K;

int main(void)
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    
    cin >> N >> K;
    
    vector<int> numbers;
    numbers.resize(N);
    
    int Input;
    for(int i = 0; i < N; ++i)
    {
        cin >> numbers[i];
    }
    
    sort(numbers.begin(), numbers.end());
    
    
    cout<< numbers[K - 1];
}