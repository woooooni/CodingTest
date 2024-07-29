#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    
    map<string, int> Books;
    for(int i =0; i < N; ++i)
    {
        string Input;
        cin >> Input;
        
        auto Pair = Books.find(Input);
        if(Pair != Books.end())
        {
            Pair->second++;
        }
        else
        {
            Books.emplace(Input, 1);
        }
    }
    
    int Count = 0;
    string Answer = "";
    
    for(auto Pair : Books)
    {
        if(Count < Pair.second)
        {
            Count = Pair.second;
            Answer = Pair.first;
        }
    }
    
    cout << Answer;
    
}