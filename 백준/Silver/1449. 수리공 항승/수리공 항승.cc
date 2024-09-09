#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, L;
vector<int> Pipe;
int main(void)
{
    
    cin >> N >> L;
    
    Pipe.resize(N);
    for(int i = 0; i < N; ++i)
    {
        cin >> Pipe[i];
    }
    
    int Answer = 0;
    
    sort(Pipe.begin(), Pipe.end());
    
    int Start = Pipe[0];
    
    for(int i = 1; i < Pipe.size(); ++i)
    {
        if(L <= Pipe[i] - Start){
            Answer++;
            Start = Pipe[i];
        }
    }
    
    cout << Answer + 1;
    
    
}