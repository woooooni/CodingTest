#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> Characters;
vector<string> Password;
int Len;

bool CheckValid()
{
    int VowelCnt = 0;
    int ConsoCnt = 0;
    
    for(int i = 0; i < Password.size(); ++i)
    {        
        if(Password[i] == "a" || Password[i] == "e" || Password[i] == "i" || Password[i] == "o" || Password[i] == "u")
            VowelCnt++;
        else
            ConsoCnt++;
    }
    
    return ((VowelCnt >= 1) && (ConsoCnt >= 2));
}

void Dfs(int Start, int Depth)
{
    if(Depth == Len)
    {
        if(true == CheckValid())
        {
            for(int i =0 ; i < Password.size(); ++i)
            {
                cout << Password[i];
            }
            cout << "\n";
        }
        return;
    }
    
    for(int i = Start; i < Characters.size(); ++i)
    {
        Password.push_back(Characters[i]);
        Dfs(i + 1, Depth + 1);
        Password.pop_back();
    }
}

int main(void)
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int Num;
    cin >> Len >> Num;
    
    for(int i =0 ; i < Num; ++i)
    {
        string Input;
        cin >> Input;
        Characters.push_back(Input);
    }
    sort(Characters.begin(), Characters.end());
    Dfs(0, 0);
}