#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <queue>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    
    set<string> peopleset;
    
    for(int i =0  ; i < N; ++i)
    {
        string name, cmd;
        cin >> name >> cmd;
        
        if(cmd == "enter")
        {
            peopleset.emplace(name);
        }
        else
        {
            peopleset.erase(name);
        }
    }
    
    priority_queue<string> pq;
    for(string name : peopleset)
    {
        pq.push(name);
    }
    
    while(!pq.empty())
    {
        cout << pq.top() << "\n";
        pq.pop();
    }
    
    
}