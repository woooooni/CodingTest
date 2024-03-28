#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <list>
#include <map>
#include <algorithm>


#define MAX_ALPHABET 26
using namespace std;

#pragma region Stack
class CustomStack
{
public:
    CustomStack()
    {
    };
    ~CustomStack()
    {
    };
    
public:
    void Excute(string strCommand)
    {
        if ("push" == strCommand)
        {
            int iNumber = 0;
            cin >> iNumber;
            m_Stack.push(iNumber);
        }
        else if ("pop" == strCommand)
        {
            if (0 == m_Stack.size())
            {
                cout << -1 << "\n";
                return;
            }
            cout << m_Stack.top() << "\n";
            m_Stack.pop();
        }
        else if ("top" == strCommand)
        {
            if (0 == m_Stack.size())
            {
                cout << -1 << "\n";
                return;
            }

            cout << m_Stack.top() << "\n";
        }
        else if ("empty" == strCommand)
        {
            if (0 == m_Stack.size())
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }

        }
        else if ("size" == strCommand)
        {
            cout << m_Stack.size() << "\n";
        }
    }

private:
    stack<int> m_Stack;
};

#pragma endregion

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#pragma region BOJ 10828 스택
    CustomStack stack;
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        string command = "";
        cin >> command;

        stack.Excute(command);
    }

#pragma endregion
}