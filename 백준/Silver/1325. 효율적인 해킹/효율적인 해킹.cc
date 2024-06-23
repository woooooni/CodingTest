#include <vector>
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

vector<int> Corps[10001];
bool Visited[10001];
int N;


vector<int> Results;
int MaxInfected = -1;
int Infected = 0;

void Dfs(int Start)
{
    Visited[Start] = true;
    ++Infected;
    
    for(int i = 0; i < Corps[Start].size(); ++i)
    {
        int Next = Corps[Start][i];
        if(false == Visited[Next])
        {
            Dfs(Next);
        }
    }
}

void Reset()
{
    Infected = 0;
    memset(Visited, false, N + 1);
}

int main(void)
{
    int M;
    cin >> N >> M;
    
    for(int i = 0; i < M; ++i)
    {
        int From, To;
        cin >> From >> To;
        Corps[To].push_back(From);
    }
    
    for(int i = 1; i<= N; ++i)
    {
        Reset();
        Dfs(i);
        
        if(Infected >= MaxInfected)
        {
            if(Infected > MaxInfected)
            {
                Results.clear();
                MaxInfected = Infected;
            }
            
            Results.push_back(i);
        }
    }
    
    for(int i = 0; i < Results.size(); ++i)
    {
        cout << Results[i] << " ";
    }
}