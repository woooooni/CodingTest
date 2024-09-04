#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int N, M;

vector<int> Nums;
int Choice[9] = {};
bool Visited[9];

void Dfs(int Depth)
{
    if(Depth == M)
    {
        for(int i =0; i < M; ++i)
        {
            cout << Choice[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for(int i = 0; i < Nums.size(); ++i)
    {
        if(Visited[i] == false)
        {
            Visited[i] = true;
            Choice[Depth] = Nums[i];
            Dfs(Depth + 1);
            Visited[i] = false;
        }
    }
}

int main(void)
{
    cin >> N >> M;
    
    for(int i =0; i < N; ++i)
    {
        Nums.push_back(i + 1);
    }
    
    Dfs(0);
}