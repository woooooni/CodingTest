#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void Compare(string Left, string Right)
{
    reverse(Left.begin(), Left.end()) ;
    reverse(Right.begin(), Right.end()) ;
    
    if(stoi(Left) > stoi(Right))
    {
        cout << Left;
    }
    else
    {
        cout << Right;
    }
}
int main(void)
{
    string Left, Right;
    cin >> Left >> Right;
    
    Compare(Left, Right);
}