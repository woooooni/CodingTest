#include<stack>
#include<iostream>
#include <string>

using namespace std;

    stack<char> Stack;

void PrintStack()
{
    while (!Stack.empty())
    {
        cout << Stack.top();
        Stack.pop();
    }
}

int main(void)
{
    string Input;


    getline(cin, Input);

    for(int i =0 ; i < Input.size(); ++i)
    {
        if(Input[i] == '<')
        {
            PrintStack();
            while(true)
            {
                cout << Input[i];
                if(Input[i] == '>')
                    break;
                ++i;
            }
        }
        else if(Input[i] == ' ')
        {
            PrintStack();
            cout << " ";
        }
        else
        {
            Stack.push(Input[i]);
        }
    }
    
    PrintStack();
}