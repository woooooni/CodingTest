#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> arr;
int N;
int main(void)
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    
    cin >>N;
    arr.resize(N * N);
    int Index = 0;
    for(int i =0 ; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            int Input;
            cin >> arr[Index++];
        }
    }
    
    sort(arr.begin(), arr.end(), greater<int>());
    
    cout << arr[N - 1];
    
    
}