#include <iostream>
#include <string>
#include <map>
using namespace std;

string to_lower(string Input)
{
    string Ans = "";
    for(int i = 0; i < Input.size(); ++i)
    {
        Ans += tolower(Input[i]);
    }
    return Ans;
}

string to_upper(string Input)
{
    string Ans = "";
    for(int i = 0; i < Input.size(); ++i)
    {
        Ans += toupper(Input[i]);
    }
    return Ans;
}

int main(void)
{
    map<char, int> strMap;
    string Input;
    cin >> Input;
    
    Input = to_lower(Input);
    for(int i =0 ; i < Input.size(); ++i)
    {
        strMap[Input[i]]++;
    }
    
    int MaxCnt = 0;
    string Answer = "";
    
    for(auto Pair : strMap)
    {
        if(MaxCnt < Pair.second)
        {
            Answer = Pair.first;
            MaxCnt = Pair.second;
        }
    }
    
    int SameCnt = 0;
    for(auto Pair : strMap)
    {
        if(Pair.second == MaxCnt)
        {
            SameCnt++;
        }
    }
    
    if(SameCnt < 2)
    {
        cout << to_upper(Answer);
    }
    else
    {
        cout << "?";
    }
    
    
        
}