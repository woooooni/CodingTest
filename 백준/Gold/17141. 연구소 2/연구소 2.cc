#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
 
#define endl "\n"
#define MAX 50
using namespace std;
 
int N, M, Answer = 987654321;
int MAP[MAX][MAX];
bool Visit[MAX][MAX];
bool Select[10];
vector<pair<int, int>> V;
vector<pair<int, int>> Select_Virus;
 
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
 
int Min(int A, int B) { if (A < B) return A; return B; }
 
void Input()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> MAP[i][j];
            if (MAP[i][j] == 2) V.push_back(make_pair(i, j));
        }
    }
}
 
bool Check()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (MAP[i][j] == 1) continue;
            if (Visit[i][j] == false) return false;
        }
    }
    return true;
}
 
void Spread_Virus()
{
    queue<pair<int, int>> Q;
    for (int i = 0; i < Select_Virus.size(); i++)
    {
        int x = Select_Virus[i].first;
        int y = Select_Virus[i].second;
        Q.push(make_pair(x, y));
        Visit[x][y] = true;
    }
 
    int Cnt = 0;
    while (Q.empty() == 0)
    {
        int S = Q.size();
        for (int Qs = 0; Qs < S; Qs++)
        {
            int x = Q.front().first;
            int y = Q.front().second;
            Q.pop();
 
            for (int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];
 
                if (nx >= 0 && ny >= 0 && nx < N && ny < N)
                {
                    if (Visit[nx][ny] == false && MAP[nx][ny] != 1)
                    {
                        Visit[nx][ny] = true;
                        Q.push(make_pair(nx, ny));
                    }
                    
                }
            }
        }
        if(Q.size() !=0) Cnt++;
    }
    if(Check() == true) Answer = Min(Answer, Cnt);
}
 
void Select_Virus_Pos(int Idx, int Cnt)
{
    if (Cnt == M)
    {
        memset(Visit, false, sizeof(Visit));
        Spread_Virus();
        return;
    }
 
    for (int i = Idx; i < V.size(); i++)
    {
        if (Select[i] == true) continue;
        Select[i] = true;
        Select_Virus.push_back(V[i]);
        Select_Virus_Pos(i, Cnt + 1);
        Select_Virus.pop_back();
        Select[i] = false;
    }
}
 
void Solution()
{
    Select_Virus_Pos(0, 0);
    if (Answer == 987654321) Answer = -1;
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
