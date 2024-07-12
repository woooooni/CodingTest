#include <iostream>
#include <vector>

using namespace std;

vector<int> Numbers;
bool Visited[50];
int Results[6];

int K;

void Dfs(int Idx, int Depth)
{
    if(Depth == 6)
    {
        for(int i =0 ; i < 6; ++i)
        {
            cout << Results[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    int Temp = -1;
    for(int i = Idx; i < K; ++i)
    {
        Results[Depth] = Numbers[i];
        Dfs(i + 1, Depth + 1);
    }
}

int main(void)
{
    while(true)
    {
        cin >> K;
        if(K == 0)
            return 0;
        
        Numbers.clear();
        
        for(int i = 0; i < K; ++i)
        {
            int Input;
            cin >> Input;
            Numbers.push_back(Input);
        }
        
        Dfs(0, 0);
        cout << "\n";
    }
    
    
}