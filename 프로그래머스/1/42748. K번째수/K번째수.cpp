#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    int idx = 0;
    for(auto command : commands)
    {
        int start = command[0] - 1;
        int end = command[1] - 1;
        int k = command[2] - 1;
        
        vector<int> temp;
        
        for(int i = start; i <= end; ++i)
        {
            temp.push_back(array[i]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[k]);
    }
    
    return answer;
}