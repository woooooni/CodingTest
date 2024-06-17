#include<iostream>
#include<string>
#include<vector>


using namespace std;

int N = 0;
int M = 0;

vector<int> Computers[101] = {};
bool Visited[101] = {};
int Infected = 0;

void Dfs(int Start)
{
    Visited[Start] = true;
    
    for(int i = 0; i < Computers[Start].size(); ++i)
    {
        int Index = Computers[Start][i];
        if(false == Visited[Index])
        {
            ++Infected;
            Dfs(Index);
        }
    }
}
int main(void)
{
    cin >> N >> M;
    
    for(int i = 0; i < M; ++i)
    {
        int From, To;
        cin >> From >> To;
        Computers[From].push_back(To);
        Computers[To].push_back(From);
    }
    
    Dfs(1);
    
    cout << Infected;
    
}