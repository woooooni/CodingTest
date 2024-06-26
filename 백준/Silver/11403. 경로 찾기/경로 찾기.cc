#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;

vector<int> Map[101];
bool Visited[101];

void Reset()
{
    memset(Visited, false, sizeof(Visited));
}

void Dfs(int Start)
{
    for(int i = 0; i < Map[Start].size(); ++i)
    {
        int Next = Map[Start][i];
        
        if(false == Visited[Next])
        {
            Visited[Next] = true;
            Dfs(Next);
        }
    }
}

int main(void)
{
    int N;
    cin >> N;
    
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            int Input;
            cin >> Input;
            if(1 == Input)
                Map[i].push_back(j);
        }
    }
    
    for(int i = 0; i < N; ++i)
    {
        Reset();
        Dfs(i);
        for(int j = 0; j <  N; ++j)
        {
            cout << Visited[j] << " ";
        }
        cout << "\n";
            
    }
}
