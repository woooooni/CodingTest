#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N, M;
vector<bool> Lights;

int main(void)
{
    cin >> N;
    Lights.resize(N + 1);
    
    for(int i = 0; i < N; ++i)
    {
        int Input;
        cin >> Input;
        Lights[i + 1] = Input;
    }
    
    cin >> M;
    
    while(M--)
    {
        int Gender, Number;
        cin >> Gender >> Number;
        
        if(Gender == 1)
        {
            for(int i = 1; i <= N; ++i)
            {
                if(i % Number == 0)
                {
                    Lights[i] = !Lights[i];
                }
            }
        }
        else
        {
            Lights[Number] = !Lights[Number];
            
            for(int j = 1; j < Lights.size(); ++j)
            {
                int Left = Number - j;
                int Right = Number + j;
                
                if(Left > 0 && Right < Lights.size())
                {
                    if(Lights[Left] == Lights[Right])
                    {
                        Lights[Left] = !Lights[Left];
                        Lights[Right] = !Lights[Right];
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
        }
    }
       
    
    for(int i = 1; i < Lights.size(); ++i)
    {
        
        cout << Lights[i] << " ";
        if(i % 20 == 0)
            cout << "\n";
    }
}