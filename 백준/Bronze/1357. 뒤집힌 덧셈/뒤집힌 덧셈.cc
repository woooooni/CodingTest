#include <iostream>
#include <string>

using namespace std;

string X, Y;
int Reverse(string str)
{
    string Temp = "";
    for(int i = str.length() - 1; 0 <= i; --i)
    {
         Temp += str[i];
    }
    
    return stoi(Temp);
}

int main(void)
{
    cin >> X >> Y;
    
    cout << Reverse(to_string(Reverse(X) + Reverse(Y)));
}