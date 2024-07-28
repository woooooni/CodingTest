#include <iostream>
#include <queue>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
int Answer = 987654321;
int Map[51][51];
bool Selected[13];

typedef struct tagVec2
{
  int x, y;
} Vec2;

vector<Vec2> Chickens;
vector<Vec2> Picked;
vector<Vec2> Houses;

int Distance(Vec2 From, Vec2 To)
{
    return (abs(From.x - To.x)) + (abs(From.y - To.y));
}

void CalcDist()
{
    int Result = 0;
    for (int i = 0; i < Houses.size(); ++i)
    {
        int MinDist = 987654321;
        for (int j = 0; j < Picked.size(); ++j) // 모든 고른 치킨집에 대해
        {
            MinDist = min(MinDist, Distance(Houses[i], Picked[j])); // 최소 치킨거리 찾아
        }
        Result += MinDist; // 최소 도시의 치킨거리 구함
    }
    Answer = min(Answer, Result);
}

    

void Solve(int x, int Depth)
{
    if(Depth == M)
    {
        CalcDist();
    }
    
    for (int i = x; i < Chickens.size(); i++)
    {
        if (Selected[i] == true)
            continue; // 이미 확정된거면 패스

        Selected[i] = true;
        Picked.push_back({ Chickens[i].x, Chickens[i].y });
        Solve(i, Depth + 1);
        Selected[i] = false;
        Picked.pop_back();
    }
}



int main(void)
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    
    for(int i =0 ; i < N; ++i)
    {
        for(int j =0 ; j < N; ++j)
        {
            cin >> Map[i][j];
            if(Map[i][j] == 1)
            {
                Houses.push_back({i, j});
            }
            else if(Map[i][j] == 2)
            {
                Chickens.push_back({i, j});
            }
        }
    }
    
    Solve(0, 0);
    cout << Answer;
    
    
}