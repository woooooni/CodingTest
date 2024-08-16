#include <iostream>
#include <set>
#include <vector>

using namespace std;

set<int> Deck;
vector<int> Cards;

int main(void)
{
    ios_base::sync_with_stdio(NULL);
    int N;
    cin >> N;
    
    for(int i =0 ; i < N; ++i)
    {
        int Input;
        cin >> Input;
        Deck.emplace(Input);
    }
    
    int M;
    cin >> M;
    
    for(int i =0 ; i < M; ++i)
    {
        int Input;
        cin >> Input;
        Cards.push_back(Input);
    }
    
    for(int i =0 ; i < Cards.size(); ++i)
    {
        if(Deck.end() != Deck.find(Cards[i]))
        {
            cout << "1 ";
        }
        else
        {
            cout << "0 ";
        }
    }
}