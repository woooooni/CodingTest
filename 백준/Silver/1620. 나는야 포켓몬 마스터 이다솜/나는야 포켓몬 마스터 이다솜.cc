#include <string>
#include <iostream>
#include <vector>
#include <map>


using namespace std;


map<string, int> PoketNames;
string NameIndex[100000];

bool IsNumber(const string& str)
{
    if(false == std::isdigit(str[0]))
        return false;
    
    return true;
}

int main(void)
{
    int N, M;
    
    cin.tie(0);
	ios::sync_with_stdio(0);
    
    cin >> N >> M;
    
    string Name;
    for(int i = 0; i < N; ++i)
    {
        cin >> Name;
        PoketNames.emplace(Name, i + 1);
        NameIndex[i] = Name;
    }
    
    for(int i = 0; i<M; ++i)
    {
        string Question;
        cin >> Question;
        
        if(IsNumber(Question))
        {
           int Idx = stoi(Question);
           cout << NameIndex[Idx - 1] << "\n";
        }
        else
        {
           cout << PoketNames.find(Question)->second << "\n";
        }
    }
    
}