#include <iostream>
#include <string>

using namespace std;

string Croatian[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
int main(void)
{
    string Input;
    cin >> Input;
    
    int Count = 0;
    for(int i = 0; i < 8; ++i)
    {
        
        while(true)
        {
            int Idx = Input.find(Croatian[i]);    
            if(Idx == string::npos)
            {
                break;
            }
            Input.replace(Idx, Croatian[i].length(),"#");
        }   
    }
    
    cout << Input.length();
}