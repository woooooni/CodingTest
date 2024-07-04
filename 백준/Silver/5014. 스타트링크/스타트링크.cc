#include <queue>
#include <iostream>

using namespace std;

int Map[1000001];
bool Visited[1000001];
int Cost[2];
int F, S, G, U, D;

bool Bfs()
{
    queue<pair<int, int>> q;
    q.push(make_pair(S, 0));
    Visited[S] = true;
    
    while(!q.empty())
    {
        pair<int, int> Current = q.front();
        q.pop();
        
        if(Current.first == G)
        {
            cout << Current.second;
            return true;
        }
        
        for(int i = 0; i < 2; ++i)
        {
            int Next = Current.first + Cost[i];
            if(0 >= Next || Next > F)
                continue;
            
            if(Visited[Next] == false)
            {
                Visited[Next] = true;
                q.push(make_pair(Next, Current.second + 1));
            }
        }
    }
    
    return false;
}

int main(void)
{
    cin >> F >> S >> G >> Cost[0] >> Cost[1];
    Cost[1] *= -1;
    
    if(false == Bfs())
    {
        cout << "use the stairs";
    }
    
}