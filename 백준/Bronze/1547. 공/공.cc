#include <iostream>
#include <string>


using namespace std;
int main(void)
{
    int M;
    cin >> M;
    
    int Cups[4] = { 0, 1, 2, 3 };
    
    for(int i = 0 ; i< M; ++i)
    {
        int From, To;
        
        cin >> From >> To;
        
        if(From != To)
            swap(Cups[From], Cups[To]);
    }
    
    for(int i = 0; i < 4; ++i)
    {
        if(1 == Cups[i])
        {
            cout << i;
            return 0;
        }       
    }    
    cout << -1;
}