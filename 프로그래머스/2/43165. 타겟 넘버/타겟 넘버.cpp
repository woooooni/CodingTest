#include <string>
#include <vector>

using namespace std;
int ans = 0; 
vector<bool> visited;
void Dfs(const vector<int>& numbers, int depth, int sum, int target)
{
    if(numbers.size() == depth)
    {
        if(sum == target)
        {
            ans++;
        }
        return;
    }
    
    Dfs(numbers, depth + 1, sum + numbers[depth], target);
    Dfs(numbers, depth + 1, sum - numbers[depth], target);
}

int solution(vector<int> numbers, int target) {
    visited.resize(numbers.size());
    Dfs(numbers, 0, 0, target);
    return ans;
}