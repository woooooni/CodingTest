#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

bool Visited[100001];
int Parents[100001];
int N, K;

vector<int> Results;
void Print()
{
    int Start = Parents[K];
    Results.push_back(K);
    while (Start != -1)
    {
        Results.push_back(Start);
        Start = Parents[Start];
    }

    for (int i = Results.size() - 1; i >= 0; --i)
    {
        cout << Results[i] << " ";
    }
}




void Bfs()
{
    queue<pair<int, int>> q;
    q.push(make_pair(N, 0));
    Visited[N] = true;

    while (!q.empty())
    {
        int Current = q.front().first;
        int Depth = q.front().second;
        q.pop();

        if (Current == K)
        {
            cout << Depth << "\n";
            Print();
            return;
        }

        int Next = Current - 1;
        if (0 <= Next && Next < 100001 && Visited[Next] == false)
        {
            Visited[Next] = true;
            Parents[Next] = Current;
            q.push(make_pair(Next, Depth + 1));
        }

        Next = Current + 1;
        if (0 <= Next && Next < 100001 && Visited[Next] == false)
        {
            Visited[Next] = true;
            Parents[Next] = Current;
            q.push(make_pair(Next, Depth + 1));
        }

        Next = Current * 2;
        if (0 <= Next && Next < 100001 && Visited[Next] == false)
        {
            Visited[Next] = true;
            Parents[Next] = Current;
            q.push(make_pair(Next, Depth + 1));
        }
    }
}


int main(void)
{
    cin >> N >> K;
    memset(Parents, -1, sizeof(Parents));
    Bfs();
}