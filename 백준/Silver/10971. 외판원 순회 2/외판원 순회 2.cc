#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

int N;
int Answer = INT_MAX;
bool Visited[11];

int Matrix[11][11];

void Travel(int Start, int End, int Depth, int Cost)
{
    if(Depth == N)
    {
        if(Matrix[End][Start] == 0)
        {
            return;
        }
        Answer = min(Cost + Matrix[End][Start], Answer);
        return;
    }
    
    for(int i = 0; i < N; ++i)
    {
        if(Visited[i] == true || Matrix[End][i] == 0)
            continue;
        
        Visited[i] = true;
        Travel(Start, i, Depth + 1, Cost + Matrix[End][i]);
        Visited[i] = false;
    }
}
int main(void)
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    
    cin >> N;
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            cin >> Matrix[i][j];
        }
    }
    
    for(int i = 0; i < N; ++i)
    {
        Visited[i] = true;
        Travel(i, i, 1, 0);
        Visited[i] = false;
    }
    
    cout << Answer;
    
}