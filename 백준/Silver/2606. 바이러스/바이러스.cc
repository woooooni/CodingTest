#include <iostream>
#include <string>
#include <vector>


using namespace std;

vector<int> Graph[101];
bool Visited[101] = {};
int N;
int Result = 0;
void Dfs(int Start = 1)
{
    Visited[Start] = true;
    for(int i = 0; i < Graph[Start].size(); ++i)
    {
        int Next = Graph[Start][i];
        if(Visited[Next] == false)
        {
            Result++;
            Dfs(Next);
        }
    }
}

int main(void)
{
    cin >> N;
    int M;
    cin >> M;
    
    for(int i = 0; i < M; ++i)
    {
        int From, To;
        cin >> From >> To;
        
        Graph[From].push_back(To);
        Graph[To].push_back(From);
    }
    
    Dfs();
    
    cout << Result;
    
}