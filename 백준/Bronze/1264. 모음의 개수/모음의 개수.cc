#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(void)
{
    string Mo = "aeuioAEUIO";
    while(true)
    {
        unordered_map<char, int> um;
        string Input;
        getline(cin, Input);
        
        if(Input == "#")
        {
            return 0;
        }
        
        for(int i =0 ; i < Input.size(); ++i)
        {
            um[Input[i]]++;
        }
        
        int Count = 0;
        for(int i = 0; i < Mo.size(); ++i)
        {
            Count += um[Mo[i]];
        }
        
        cout << Count << "\n";
        
    }
}

