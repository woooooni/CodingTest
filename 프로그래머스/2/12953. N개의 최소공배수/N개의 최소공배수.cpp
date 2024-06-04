#include <string>
#include <vector>

using namespace std;

int GCD(int x, int y)
{
    int remain = 1;
    while(x % y != 0)
    {
        remain = x % y;
        x = y;
        y = remain;
    }
    
    return y;
}

int solution(vector<int> arr) {
    int answer = (arr[0] * arr[1]) / GCD(arr[0], arr[1]);
    
    for(int i = 2; i<arr.size(); ++i)
    {
        answer = answer * arr[i] / GCD(answer, arr[i]);
    }
    return answer;
}