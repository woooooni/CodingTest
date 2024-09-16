#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

int N, S;
int main(void)
{
    vector<int> Nums;
    
    cin >> N >> S;
    Nums.resize(N);
    for(int i = 0; i < N; ++i)
    {
        cin >> Nums[i];
    }
    
    int Start = 0;
    int End = 0;
    int Sum = 0;
    
    int Answer = INT_MAX;
    while(Start <= End)
    {
        if(Sum >= S)
        {
            Answer = min(Answer, End - Start);
            Sum -= Nums[Start++];
        }
        else if(End >= Nums.size())
        {
            break;
        }
        else
        {
            Sum += Nums[End++];
        }
    }
    
    if(Answer == INT_MAX)
    {
        cout << 0;
    }
    else
    {
        cout << Answer;
    }
    
    
}