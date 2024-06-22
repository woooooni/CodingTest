#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(NULL);
    
    while(true)
    {
        cin >> N;
        
        if(cin.eof() == true) 
           break;
        
        int Number = 1;
        int Count = 1;
        while(true)
        {
            if(Number % N == 0)
                break;
            
            ++Count;
            Number = Number * 10 + 1;
            Number %= N;
        }
        
        cout << Count << "\n";
    }
    
}