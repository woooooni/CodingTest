#include <iostream>
#include <map>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    
    long long answer = 0xffff;
    
    map<long long, int> countmap;
    for(int i =0 ; i < N; ++i)
    {
        long long Input;
        cin >> Input;
        countmap[Input]++;
    }
    
    int cnt = 0;
    for(auto pair : countmap)
    {
        if(pair.second > cnt)
        {
            cnt = pair.second;
            answer = pair.first;
        }
    }
    
    cout << answer;
}