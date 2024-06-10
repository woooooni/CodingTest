#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

vector<int> Graph[101];
bool Visited[101] = { false, };
int InfectCount = 0;

void DFS(int Number)
{    
    for(int i = 0; i < Graph[Number].size(); ++i)
    {
        int Index = Graph[Number][i];
        if(false == Visited[Index])
        {
            Visited[Index] = true;
            InfectCount++;
            DFS(Index);
        }
            
    }
}

int main(void)
{
    int N = 0;
    int ConnectionCount = 0;
    
    cin >> N;
    cin >> ConnectionCount;
    
    int From, To;
    for(int i = 0; i<ConnectionCount; ++i)
    {
        cin >> From >> To;
        Graph[From].push_back(To);
        Graph[To].push_back(From);
    }
    
    Visited[1] = true;
    DFS(1);
    
    cout << InfectCount;
    
}