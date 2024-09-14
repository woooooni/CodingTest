#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int N, K;
int Count = 0;
int main(void)
{
    cin >> N >> K;
    
    string Input;
    cin >> Input;
    
    stack<char> Stack;
    for(int i = 0; i < Input.length(); ++i)
    {
        while(!Stack.empty() && Count < K && Stack.top() < Input[i])
        {
            Stack.pop();
            Count++;
        }
        Stack.push(Input[i]);
    }
    
    while(!Stack.empty() && Count < K)
    {
        Stack.pop();
        Count++;
    }
    
    stack<char> Temp;
    while (!Stack.empty())
    {
        Temp.push(Stack.top());
        Stack.pop();
    }
    
    while (!Temp.empty())
    {
        cout << Temp.top();
        Temp.pop();
    }    
}

