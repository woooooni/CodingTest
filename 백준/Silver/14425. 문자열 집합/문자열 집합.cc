#include <set>
#include <iostream>

using namespace std;
int N, M;

int main(void)
{
    cin >> N >> M;
    
    set<string> strSet;
    for(int i =0 ; i < N; ++i)
    {
        string Input;
        cin >> Input;
        strSet.emplace(Input);
    }
    
    int Count = 0;
    for(int i = 0 ; i< M; ++i)
    {
        string Input;
        cin >> Input;
        if(strSet.end() != strSet.find(Input))
        {
            Count++;
        }
    }
    
    cout << Count;
}