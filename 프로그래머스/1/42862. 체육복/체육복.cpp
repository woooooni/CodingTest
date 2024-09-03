#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> Students;
    Students.resize(n, 0);
    
    for(int i = 0; i < lost.size(); ++i)
    {
        Students[lost[i] - 1]--;
    }
    for(int i = 0; i < reserve.size(); ++i)
    {
        Students[reserve[i] - 1]++;
    }
    
    for(int i = 0; i < Students.size(); ++i)
    {
        if(Students[i] < 0)
        {
            if(i > 0 && Students[i - 1] > 0)
            {
                Students[i - 1]--;
                Students[i]++;
            }
            
            else if(i < Students.size() - 1 && Students[i + 1] > 0)
            {
                Students[i + 1]--;
                Students[i]++;
            }
        }
    }
    
    for(int i = 0; i < Students.size(); ++i)
    {
        if(Students[i] > -1)
            answer++;
    }
    
    return answer;
}