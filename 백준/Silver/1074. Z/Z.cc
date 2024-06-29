#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int N, r, c;
int Answer = 0;

void Dfs(int x, int y, int len)
{
    if(x == c && y == r)
    {
        cout << Answer;
        return;
    }
    else if(c < x + len && r < y + len && c >= x && r >= y)
    {
        Dfs(x, y, len / 2);
        Dfs(x + len / 2, y, len / 2);
        Dfs(x, y + len / 2, len / 2);
        Dfs(x + len / 2, y + len / 2, len / 2);
    }
    else
    {
        Answer += len * len;
    }
}

int main(void)
{
    cin >> N >> r >> c;
    Dfs(0, 0, pow(2, N));
}