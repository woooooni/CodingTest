#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <list>
#include <map>
#include <queue>
#include <algorithm>


#define MAX_ALPHABET 26
using namespace std;


typedef struct tagVec2
{
    tagVec2(int x, int y)
        : iX(x)
        , iY(y)
    {

    }

public:
    int Get_X() { return iX; }
    int Get_Y() { return iY; }
private:
    int iX, iY;
}Vec2;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    vector<Vec2> coords;
    for (int i = 0; i < N; ++i)
    {
        int x, y;

        cin >> x >> y;

        coords.push_back(Vec2(x, y));
    }

    sort(coords.begin(), coords.end(), [](Vec2 left, Vec2 right)
        {
            if (left.Get_Y() == right.Get_Y())
            {
                if (left.Get_X() < right.Get_X())
                    return true;
                else
                    return false;
            }

            if (left.Get_Y() < right.Get_Y())
                return true;
            else
                return false;
        });

    for (int i = 0; i < N; ++i)
    {
        cout << coords[i].Get_X() << " " << coords[i].Get_Y() << "\n";
    }
}