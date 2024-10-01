#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool Check(long long Left, long long Right)
{
    return Left == Right 
        || Left * 3 == Right * 2 
        || Left * 4 == Right * 2
        || Left * 4 == Right * 3;
}

long long solution(vector<int> weights) {
    long long answer = 0;
    
    sort(weights.begin(), weights.end());
    
    int start = 0;
    while(start < weights.size())
    {
        for(int i = start + 1; i < weights.size(); ++i)
        {
            if(Check(weights[start], weights[i]) == true)
            {
                answer++;
            }
        }
        start++;
    }
    
    
    return answer;
}