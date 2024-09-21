#include <string>
#include <vector>
#include <utility>
using namespace std;


pair<int, int> Current = { 0, 0 };

bool IsIn(pair<int, int> Next, const vector<string>& Park)
{
    return 0 <= Next.first && 0 <= Next.second &&  Next.first < Park[0].size() && Next.second < Park.size();
}

void Move(char Sig, const int Dist, const vector<string>& Park)
{
    pair<int, int> Dir;
    if(Sig == 'N')
    {
        Dir = {0, -1};
    }
    else if(Sig == 'S')
    {
        Dir = {0, 1};
    }
    else if(Sig == 'W')
    {
        Dir = {-1, 0};
    }
    else if(Sig == 'E')
    {
        Dir = {1, 0};
    }
    
    pair<int, int> Dest = make_pair(Dir.first * Dist + Current.first, Dir.second * Dist + Current.second);
    if(IsIn(Dest, Park) == true)
    {
        for(int i = 1; i <= Dist; ++i)
        {
            pair<int, int> Next = make_pair(Dir.first * i + Current.first, Dir.second * i + Current.second);
            if(Park[Next.second][Next.first] == 'X')
            {
                return;
            }
        }
        
        Current = Dest;
    }
    
}

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    
    for(int i = 0; i< park.size(); ++i) 
    {
        for(int j = 0; j < park[i].size(); ++j)
        {
            if(park[i][j] == 'S')
            {
                Current.first = j;
                Current.second = i;
                break;
            }
        }
    }
    
    for(int i = 0; i < routes.size(); ++i)
    {
        Move(routes[i][0], routes[i][2] - '0', park);
    }
    
    answer.push_back(Current.second);
    answer.push_back(Current.first);
    return answer;
}