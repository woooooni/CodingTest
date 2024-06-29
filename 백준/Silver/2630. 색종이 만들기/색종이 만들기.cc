#include <iostream>
#include <string>
#include <queue>
using namespace std;

int N = 0;
int Map[129][129];

int White = 0;
int Blue = 0;

void Dfs(int StartX, int StartY, int Size)
{
    bool Zero = true;
    bool One = true;
    for(int i = StartX ; i < StartX + Size; ++i)
    {
        for(int j = StartY; j < StartY + Size; ++j)
        {
            if(Map[i][j] == 1)
            {
                Zero = false;
            }
            if(Map[i][j] == 0)
            {
                One = false;
            }
        }
    }
    
    if(true == Zero)
    {
        White++;
        return;
    }
    
    if(true == One)
    {
        Blue++;
        return;
    }
    
    Dfs(StartX, StartY, Size / 2);
    Dfs(StartX, StartY + Size / 2, Size / 2);
    Dfs(StartX + Size / 2, StartY, Size / 2);
    Dfs(StartX + Size / 2, StartY + Size / 2, Size / 2);

}

int main(void)
{
    cin >> N;
    
    for(int i = 0 ; i < N; ++i)
    {
        for(int j = 0 ; j <  N; ++j)
        {
            cin >> Map[i][j];             
        }
    }
    
    Dfs(0, 0, N);
    
    cout << White << "\n" << Blue;
}