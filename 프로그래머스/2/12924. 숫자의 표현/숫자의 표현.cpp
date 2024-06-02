#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    for (int i = 1; i < n; i ++) 
    {
        int sum = 0, start = i;
        while (sum < n) 
        {
            sum += start++;// 같거나 커지기 전까지 더해준다.
        }
        
        if (sum == n) 
            answer++;// 같다면 answer++;
    }
    
    return answer;
}