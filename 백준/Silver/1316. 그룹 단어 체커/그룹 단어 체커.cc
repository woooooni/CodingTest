#include <iostream>
#include <string>
#include <map>
#include <unordered_set>

using namespace std;

bool Check(string Input)
{
    unordered_set<char> s;
    
    char Dest = Input[0];
    
    for(int i = 0; i  < Input.length(); ++i)
    {
        char Current = Input[i];
        if(s.end() == s.find(Current))
        {
            Dest = Current;
            s.emplace(Current);
        }
        else if(s.end() != s.find(Current))
        {
            if(Dest != Current)
            {
                return false;
            }
        }
    }
    
    return true;
}


int main(void)
{
    int N;
    cin >> N;
    
    int Result = 0;
    
    for(int i =0 ; i < N; ++i)
    {
        string Input;
        cin >> Input;
        if(Check(Input) == true)
            Result++;
    }
    
    cout << Result;
}