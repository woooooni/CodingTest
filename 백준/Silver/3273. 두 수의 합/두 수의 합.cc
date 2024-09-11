#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int X;
vector<int> Numbers;
int main(void)
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    
    cin >> N;
    Numbers.resize(N);
    for(int i =0 ; i < N; ++i)
    {
        cin >> Numbers[i];
    }
    
    cin >> X;
    
    sort(Numbers.begin(), Numbers.end());
    
    int Start = 0;
    int End = Numbers.size() - 1;
    int Answer = 0;
    
    while(Numbers[End] >= X)
    {
        --End;
    }
    
    while(Start < End)
    {
        int Sum = Numbers[Start] + Numbers[End];
        if(Sum == X)
        {
            ++Answer;
            ++Start;
            --End;
        }
        else if(Sum > X)
        {
            --End;
        }
        else
        {
            ++Start;
        }
    }
    
    cout << Answer;
    
}