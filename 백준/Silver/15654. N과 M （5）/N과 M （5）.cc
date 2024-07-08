#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;

int Numbers[9];
bool Visited[9];

vector<int> Table;
void Dfs(int Depth)
{
    if(Depth == M)
    {
        for(int i = 0; i < M; ++i)
        {
            cout << Numbers[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for(int i = 1; i <= N; ++i)
    {
        if(Visited[i - 1] == false)
        {
            Visited[i - 1] = true;
            Numbers[Depth] = Table[i - 1];
            Dfs(Depth + 1);
            Visited[i - 1] = false;   
        }
    }
    
}

int main(void)
{
    cin >> N >> M;
    
    for(int i = 0; i < N; ++i)
    {
        int Input;
        cin >> Input;
        Table.push_back(Input);
    }
    sort(Table.begin(), Table.end());
    
    Dfs(0);
}