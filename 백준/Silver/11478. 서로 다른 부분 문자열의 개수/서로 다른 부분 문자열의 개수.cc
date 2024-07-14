#include <iostream>
#include <string>
#include <set>


using namespace std;
set<string> Parts;

int main(void)
{
    string Input;
    
    cin >> Input;
    
    string Temp = "";
    for(int i = 0; i < Input.length(); ++i)
    {
        for(int j = i; j < Input.length(); ++j)
        {
            Temp += Input[j];
            Parts.emplace(Temp);
        }
        Temp = "";
    }
    
    cout << Parts.size();
}
