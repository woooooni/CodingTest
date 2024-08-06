#include <iostream>
#include <string>

using namespace std;

int N;
int Answer = 0;

void Dfs(string Input)
{
    if(Input.length() == N)
    {
        int Num = stoi(Input);
        
        if(Num % 3 == 0)
            Answer++;
        
        return;
    }
    
    Dfs(Input + "0");
    Dfs(Input + "1");
    Dfs(Input + "2");
}

int main(void)
{
    cin >> N;
    
    Dfs("1");
    Dfs("2");
    
    cout << Answer;
}