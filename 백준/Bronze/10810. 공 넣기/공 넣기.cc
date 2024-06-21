#include <iostream>
#include <string>
#include <vector>

using namespace std;
int N;
int Temp[101] = {};
int main(void)
{
    int M;
    cin >> N >> M;
    
    int From, To, Number;
    for(int i = 0; i < M; ++i)
    {
        cin >> From >> To >> Number;
        for(int j = From; j <= To; ++j)
        {
            Temp[j] = Number;
        }
    }
    
    for(int i = 1; i <= N; ++i)
    {
        cout << Temp[i] << " ";
    }
}
