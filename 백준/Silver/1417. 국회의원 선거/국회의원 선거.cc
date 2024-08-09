#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int N, Answer, Dasom;
int main()
{

    priority_queue<int> pq;
    
    
    cin >> N;
    cin >> Dasom;
    N--;
    while(N--)
    {
        int Input;
        cin>> Input;
        if(Input >= Dasom) 
            pq.push(Input);
    }
    
    while(!pq.empty() && pq.top() >= Dasom )
    {
        int Temp = pq.top(); 
        pq.pop();
        Temp--; 
        Answer++; 
        Dasom++;
        pq.push(Temp);
    }
    
    cout<< Answer << "\n";
    
    return 0;
}