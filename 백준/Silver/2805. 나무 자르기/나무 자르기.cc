#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long long N, M, Max = 0;
    
    cin >> N >> M;
    
    vector<long long> Trees(N);
    for(int i = 0; i < N; i++) 
        cin >> Trees[i];
    
    sort(Trees.begin(), Trees.end());
    
    long long Low = 0;
    long long High = Trees[N - 1];
    
    while(Low <= High)
    {
        long long Sum = 0;
        long long Cut = (Low + High) / 2;
        
        for(int i = 0; i < N; ++i) 
        {
            if(Trees[i] - Cut > 0) 
                Sum += Trees[i] - Cut;
        }
        
        if(Sum >= M)
        { 
            Max = Cut; // 현재 cut 지점을 최대 지점으로 저장
            Low = Cut + 1; // cut 가능 구간을 더 올림
        } 
        else
        {
            High = Cut - 1; // m미터가 안 되면 cut 가능 구간을 내림
        }
    }
    
    cout << Max; // 최대 cut 지점 출력
    
    return 0;
}
