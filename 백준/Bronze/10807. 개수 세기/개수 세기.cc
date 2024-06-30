#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N, Number;
    vector<int> Numbers;
    cin >> N;
    
    for(int i = 0 ; i < N; ++i)
    {
        int Input;
        cin >> Input;
        
        Numbers.push_back(Input);
    }
    
    cin >> Number;
    
    int Result = 0;
    for(int i = 0; i < Numbers.size(); ++i)
    {
        if(Number == Numbers[i])
        {
            ++Result;
        }
    }
    cout << Result;
}