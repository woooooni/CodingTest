#include <string>
#include <vector>

using namespace std;

void Solve(vector<int>& answer, long long Input)
{
    if(Input == 0)
    {
        return;
    }
    answer.push_back(Input % 10);
    Solve(answer, Input / 10);
}

vector<int> solution(long long n) {
    vector<int> answer;
    Solve(answer, n);
    
    return answer;
}