#include <iostream>
#include <queue>

using namespace std;

int People[10];

int main(void)
{
    int N;
    cin >> N;
    
    for(int i = 1; i<= N; ++i)
    {
        int Input;
        cin >> Input;
        
        for(int idx = 0; idx < N; ++idx)
        {   
            if(Input == 0 && People[idx] == 0)
            {
                People[idx] = i;
                break;
            }
            if(People[idx] == 0)
            {
                Input--;
            }
        }
    }
    
    for(int i = 0; i < N; ++i)
    {
        cout << People[i] << " ";
    }
    
    
    
}