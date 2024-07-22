#include <iostream>
#include <queue>
/*
$0$인 경우 북쪽,
$1$인 경우 동쪽,
$2$인 경우 남쪽,
$3$인 경우 서쪽 */
using namespace std;

int DirX[4]{ -1, 0, 1, 0 };
int DirY[4]{ 0, 1, 0, -1 };


int CurrentX, CurrentY, CurrentDir;

int N, M;
int Map[51][51];
int Answer = 0;

void Solve()
{
    while (true)
    {
        if (Map[CurrentX][CurrentY] == 0)
        {
            Map[CurrentX][CurrentY] = 2;
            Answer++;
        }

        bool Cleaned = true;
        for (int i = 0; i < 4; ++i)
        {
            int NextX = CurrentX + DirX[i];
            int NextY = CurrentY + DirY[i];

            if (Map[NextX][NextY] == 0)
            {
                Cleaned = false;
                break;
            }
        }

        if (Cleaned)
        {
            /*
                현재 칸의 주변 4칸 중 청소되지 않은 빈 칸이 없는 경우,
                바라보는 방향을 유지한 채로 한 칸 후진할 수 있다면 한 칸 후진하고 1번으로 돌아간다.
                바라보는 방향의 뒤쪽 칸이 벽이라 후진할 수 없다면 작동을 멈춘다.
            */

            int NextX = CurrentX + (-1 * DirX[CurrentDir]);
            int NextY = CurrentY + (-1 * DirY[CurrentDir]);

            if (Map[NextX][NextY] == 1)
            {
                return;
            }
            else
            {
                CurrentX = NextX;
                CurrentY = NextY;
            }
        }
        else
        {
            /*
                현재 칸의 주변 4칸 중 청소되지 않은 빈 칸이 있는 경우,
                반시계 방향으로 90도 회전한다.
                바라보는 방향을 기준으로 앞쪽 칸이 청소되지 않은 빈 칸인 경우 한 칸 전진한다.
                1번으로 돌아간다.
             */
            CurrentDir = (CurrentDir + 3) % 4;
            int NextX = CurrentX + DirX[CurrentDir];
            int NextY = CurrentY + DirY[CurrentDir];

            if (Map[NextX][NextY] == 0)
            {
                CurrentX = NextX;
                CurrentY = NextY;
            }
        }
    }
}



int main(void)
{
    cin >> N >> M;
    cin >> CurrentX >> CurrentY >> CurrentDir;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> Map[i][j];
        }
    }

    Solve();
    cout << Answer;
}

