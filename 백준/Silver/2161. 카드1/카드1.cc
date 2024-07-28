#include <queue>
#include <iostream>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    queue<int> Cards;
    
    for(int i = 1; i <= N; ++i)
    {
        Cards.push(i);
    }
    
    while(!Cards.empty())
    {
        cout << Cards.front() << " ";
        Cards.pop();
        
        int Next = Cards.front();
        Cards.push(Next);
        Cards.pop();
    }
}