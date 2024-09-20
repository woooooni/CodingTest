#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    
    int answer = 0;
    
    bool bFind = false;
    sort(numbers.begin(), numbers.end());
    
    int Idx = 0;
    for(int i = 0; i < 10; ++i)
    {
        if(numbers[Idx] == i)
        {
            Idx++;
        }
        else
        {
            bFind = true;
            answer += i;
        }
    }
    
    if(bFind)
    {
        return answer;
    }
    else
    {
        return -1;
    }
}