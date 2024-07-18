#include <iostream>
#include <string>
#include <vector>


using namespace std;

int N;
int S;
int Answer = 0;

vector<int> Numbers;
void Dfs(int Sum, int Depth)
{
    if(Depth == N)
    {
        if(Sum == S)
        {
            Answer++;
        }
        return;
    }
    Dfs(Sum, Depth + 1);
    Dfs(Sum + Numbers[Depth], Depth + 1);
}

int main(void)
{
    cin >> N >> S;
    Numbers.resize(N);
    
    for(int i =0 ; i < N; ++i)
    {
        cin >> Numbers[i];
    }
    
    Dfs(0, 0);
    
    Answer = S == 0 ? Answer - 1 : Answer;
    cout << Answer;
}