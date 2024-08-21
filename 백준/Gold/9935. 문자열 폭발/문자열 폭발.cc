#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int main()
{
    string Input;
    cin >> Input;
    string Bomb;
    cin >> Bomb;

    string Concat = "";
    
    for(int i = 0;i < Input.size(); i++)
    {
        Concat.push_back(Input[i]);
        if(Concat.back() == Bomb.back())
        {
            if(Concat.size() >= Bomb.size())
            {
                if(Concat.substr(Concat.size() - Bomb.size(), Bomb.size()) == Bomb)
                {
                    Concat.erase(Concat.size() - Bomb.size(), Bomb.size());
                }
            }
        }
    }

    if(Concat.size() <= 0){
        cout << "FRULA" << endl;
    }
    else{
        cout<< Concat <<endl;
    }

    return 0;
}