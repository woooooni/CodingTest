#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> Arr;

int main(void)
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(NULL);
    
    int M;
    cin >> M;
    
    Arr.resize(21);
    
    string Cmd;
    for(int i = 0; i < M; ++i)
    {
        cin >> Cmd;
        int Number;
        
        if(Cmd == "add")
        {
            cin >> Number;
            Arr[Number] = 1;
        }
        else if(Cmd == "remove")
        {
            cin >> Number;
            Arr[Number] = 0;
        }
        else if(Cmd == "check")
        {
            cin >> Number;
            
            if(0 != Arr[Number])
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if(Cmd == "toggle")
        {
            cin >> Number;
            Arr[Number] = Arr[Number] == 0 ? 1 : 0;
        }
        else if(Cmd == "all")
        {
            for(int i = 0; i < Arr.size(); ++i)
            {
                Arr[i] = i;
            }
        }
        else if(Cmd == "empty")
        {
            for(int i = 0; i < Arr.size(); ++i)
            {
                Arr[i] = 0;
            }
        }
    }
}