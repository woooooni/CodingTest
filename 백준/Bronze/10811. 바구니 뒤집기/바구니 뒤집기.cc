#include <iostream>
#include <string>
#include <queue>

using namespace std;

int Basket[101];

int main(void)
{
    int N, M;
    
    cin >> N >> M;
    for(int i = 1; i<= N; ++i)
    {
        Basket[i] = i;
    }
    
    for(int i = 0; i < M; ++i)
    {
        int Start, End;
        cin >> Start >> End;
        if(Start == End)
            continue;
        
        for(int j = 0; j <= (End - Start) / 2; ++j)
        {
            swap(Basket[Start + j], Basket[End - j]);
        }
    }
    
    
    for(int i = 1; i<= N; ++i)
    {
        cout << Basket[i] << " ";
    }
    
}