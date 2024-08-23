#include <iostream>
#include <stack>

using namespace std;

int K;
int main(void)
{
    stack<int> s;
    cin >> K;
    
    for(int i =0 ; i <K; ++i)
    {
        int Input;
        cin >> Input;
        
        if(Input == 0)
        {
            s.pop();
        }
        else
        {
            s.push(Input);
        }
    }
    
    int Result = 0;
    while(!s.empty())
    {
        Result += s.top();
        s.pop();
    }
    cout << Result;
}