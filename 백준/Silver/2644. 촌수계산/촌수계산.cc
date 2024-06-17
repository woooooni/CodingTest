#include<iostream>
#include<string>
#include<string.h>
#include<vector>

using namespace std;

vector<int> People[101] = {};
bool Visited[101] = {};

int N = 0;
int Start, End;
int Result = 0;

void Dfs(int Start, int End, int Count)
{
    Visited[Start] = true;
    if(Start == End)
    {
        Result = Count;
    }
    
    for(int i = 0; i < People[Start].size(); ++i)
    {
        int Next = People[Start][i];
        if(false == Visited[Next])
        {
            Dfs(Next, End, Count + 1);
        }
    }
}

int main(void)
{
    int M;
    
    cin >> N >> Start >> End >> M;
    
    for(int i = 0; i < M; ++i)
    {
        int From, To;
        cin >> From >> To;
        
        People[From].push_back(To);
        People[To].push_back(From);
    }
    
    Dfs(Start, End, 0);
    if(Result == 0)
        cout << -1;
    else
        cout << Result;
    
    
    return 0;
}