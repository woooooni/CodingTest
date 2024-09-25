#include <bits/stdc++.h>

using namespace std;

void Print_Zero(int t) {
    for (int i = 0; i < t; i++) 
    {
        cout << "0";
    }
}
int main() 
{
    string First, Second;
    char Op;
    cin >> First >> Op >> Second;
    int FirstSize = First.size() - 1;
    int SecondSize = Second.size() - 1;
    if (Op == '+') 
    {
        if (First.size() == Second.size()) 
        {
            cout << "2";
            Print_Zero(First.size() - 1);
        } 
        else 
        {
            cout << "1";
            int Max = max(FirstSize, SecondSize);
            int Min = min(FirstSize, SecondSize);
            Print_Zero(Max - Min - 1);
            cout << "1";
            Print_Zero(Min);
        }
    }
    if (Op == '*') 
    {
        cout << "1";
        Print_Zero(FirstSize + SecondSize);
    }
}