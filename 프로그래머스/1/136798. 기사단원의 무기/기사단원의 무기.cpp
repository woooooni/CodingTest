#include <string>
#include <vector>
using namespace std;

int solution(int number, int limit, int power) 
{
    int answer = 0;
    vector<int> vk(number+1);

    for(int i = 1, cnt = 0; i<=number ; i++)
    {
        cnt = 0;
        for (int j = 1; j <= number / i; j++) 
        {
            vk[i * j]++;
        }
    }

    for(int i = 1; i < vk.size(); i++)
        vk[i] <= limit ? answer += vk[i] : answer += power;    

    return answer;
}