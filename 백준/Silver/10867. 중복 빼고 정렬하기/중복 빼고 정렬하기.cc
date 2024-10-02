#include <iostream>
#include <queue>
#include <set>

using namespace std;
int N;
vector<int> Numbers;
int main(void)
{
    cin >> N;
    set<int> Numset;
    
    for(int i =0 ; i < N; ++i)
    {
        int Input;
        cin >> Input;
        Numset.emplace(Input);
    }
    
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int Number : Numset)
    {
        pq.push(Number);
    }
    
    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    
    
}