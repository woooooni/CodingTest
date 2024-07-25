#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

int N, M;
int Map[8][8];
int CopiedMap[8][8];

int Dx[4] = { 0, 0, -1, 1 };
int Dy[4] = { -1, 1, 0, 0 };

bool Visited[8][8];
int Answer = 0;

void CopyMap()
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            CopiedMap[i][j] = Map[i][j];
        }
    }
}

int GetSafetyZone()
{
    int Result = 0;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (CopiedMap[i][j] == 0)
            {
                Result++;
            }
        }
    }

    return Result;
}

void Spread()
{
    memset(Visited, false, sizeof(Visited));
    CopyMap();
    queue<pair<int, int>> q;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (CopiedMap[i][j] == 2)
            {
                q.push(make_pair(i, j));
            }
        }
    }

    while (!q.empty())
    {
        pair<int, int> Current = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i)
        {
            int NextX = Current.first + Dx[i];
            int NextY = Current.second + Dy[i];

            if (0 > NextX || 0 > NextY || N <= NextX || M <= NextY)
                continue;

            if (CopiedMap[NextX][NextY] == 0 && Visited[NextX][NextY] == false)
            {
                Visited[NextX][NextY] = true;
                CopiedMap[NextX][NextY] = 2;
                q.push(make_pair(NextX, NextY));
            }
        }
    }

    Answer = max(GetSafetyZone(), Answer);
}

void Solve(int Depth)
{
    if (Depth == 3)
    {
        Spread();
        return;
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (Map[i][j] == 0)
            {
                Map[i][j] = 1;
                Solve(Depth + 1);
                Map[i][j] = 0;
            }
        }
    }
}


int main(void)
{
    cin >> N >> M;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> Map[i][j];
        }
    }

    Solve(0);
    cout << Answer;

}