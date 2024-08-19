#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    
    set<string> WordsSet;
    
    for(int i = 0;  i < N; ++i)
    {
        string Input;
        cin >> Input;
        WordsSet.emplace(Input);
    }
    
    vector<string> Words;
    
    for(auto Num :  WordsSet)
    {
        Words.push_back(Num);
    }
        
    sort(Words.begin(), Words.end(), [](string Left, string Right)
    {
        if(Left.length() == Right.length())
        {
            return Left < Right;
        }
        else
        {
            return Left.length() < Right.length();
        }
    });
    
    
    for(int i =0 ; i < Words.size(); ++i)
    {
        cout << Words[i] << "\n";
    }
    
}