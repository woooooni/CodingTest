#include<iostream>
#include<queue>
 
#define endl "\n"
#define MAX 20
using namespace std;
 
int R, C, Answer;
char MAP[MAX][MAX];
bool Visit[26];
 
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
 
void Input()
{
    cin >> R >> C;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> MAP[i][j];
        }
    }
}
 
void DFS(int x, int y, int Cnt)
{
    Answer = max(Answer, Cnt);
    
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
 
        if (nx >= 0 && ny >= 0 && nx < R && ny < C)
        {
            if (Visit[MAP[nx][ny] - 'A'] == false)
            {
                Visit[MAP[nx][ny] - 'A'] = true;
                DFS(nx, ny, Cnt + 1);
                Visit[MAP[nx][ny] - 'A'] = false;
            }
        }
    }
}
 
void Solution()
{
    Visit[MAP[0][0] - 'A'] = true;
    DFS(0, 0, 1);
 
    cout << Answer << endl;
}
 
void Solve()
{
    Input();
    Solution();
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
 
    return 0;
}