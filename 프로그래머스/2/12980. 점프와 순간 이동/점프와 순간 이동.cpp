#include <iostream>
using namespace std;

int solution(int n)
{
    int ans = 0;
    while(n >= 1) 
    {
        if(n % 2 == 0) 
        {
            n /= 2;
            continue;
        }
        n--;
        ans++;
    }
    return ans;
}