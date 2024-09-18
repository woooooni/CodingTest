#include <iostream>
#include <string>
#include <vector>



using namespace std;

vector<string> Split(string Input, char Delim)
{
    vector<string> Result;
    
    string Res = "";
    for(int i = 0; i < Input.size(); ++i)
    {
        if(Input[i] == Delim)
        {
            Result.push_back(Res);
            Res = "";
        }
        else
        {
            Res += Input[i];
        }
    }
    Result.push_back(Res);
    return Result;
}

string Input;
int main(void)
{
    cin >> Input;
    
    vector<string> SplitInput = Split(Input, '-');
    
    for(int i =0 ; i < SplitInput.size(); ++i)
    {
        cout << SplitInput[i][0];
    }
}