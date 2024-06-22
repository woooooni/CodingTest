#include <iostream>
#include <vector>
#include <string>


using namespace std;
int Balls[101];
int main(void)
{
    int N, M;
    
    cin >> N >> M;
    
    for(int i = 1; i <= N; ++i)
    {
        Balls[i] = i;
    }
    
    for(int i = 0; i < M; ++i)
    {
        int From, To;
        cin >> From >> To;
        
        int Temp = Balls[From];
        Balls[From] = Balls[To];
        Balls[To] = Temp;
    }
    
    for(int i = 1; i <= N; ++i)
    {
        cout << Balls[i] << " ";
    }
    
    
}