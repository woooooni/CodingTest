#include <iostream>
#include <string>

using namespace std;

int Bingo[5][5] = {};
bool Check[5][5] = {};
int Result = 0;

void CheckBingo(int x, int y)
{
    int i = 0;
    for(i = 0; i < 5; ++i)
    {
        if(false == Check[x][i])
            break;
    }
    
    if(i == 5)    
        ++Result;
    
    for(i = 0; i < 5; ++i)
    {
        if(false == Check[i][y])
            break;
    }
    
    if(i == 5)    
        ++Result;
    
    
    if(x == y)
    {
      Result += (Check[0][0] && Check[1][1] && Check[2][2] && Check[3][3] && Check[4][4]);
    }
    
    if(x == (4 - y))
    {
       Result += (Check[0][4] && Check[1][3] && Check[2][2] && Check[3][1] && Check[4][0]);
    }
}

void Mark(int Input)
{
    for(int i = 0; i< 5; ++i)
    {
        for(int j = 0; j < 5; ++j)
        {
            if(Input == Bingo[i][j])
            {
                Check[i][j] = true;
                CheckBingo(i, j);
                return;
            }
        }
    }
}

int main(void)
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(NULL);
    
    for(int i = 0; i< 5; ++i)
    {
        for(int j = 0; j < 5; ++j)
        {
            int Number;
            cin >> Number;
            Bingo[i][j] = Number;
        }
    }
    
    int Count = 1;
    while(Result < 3)
    {
        int Input;
        cin >> Input;
        Mark(Input);
        
        if(Result >= 3)
            break;
        
        ++Count;
    }
    
    cout << Count;
}