#include <string>
#include <string.h>
#include <iostream>

using namespace std;

int main(void)
{
    int N, M;
    
    
    string Q;
    
    cin >> N >> M >> Q;
    
    int Answer = 0;
    for(int i = 1; i < Q.length(); ++i)
    {
        int Count = 0;
        if(Q[i-1]=='I')
        {
            while(Q[i + 1] == 'I' && Q[i] == 'O')
            {
                i+=2;
                Count++;
                if(Count == N)
                { 
                    Count--; 
                    Answer++;
                }
            }
        }
    }
    
    cout << Answer;
}
