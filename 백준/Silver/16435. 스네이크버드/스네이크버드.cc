#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> Fruit;
int N;
int Len = 0;

int main(void)
{
    cin >> N;
    cin >> Len;
    
    Fruit.resize(N);
    for(int i =0 ; i < N; ++i)
    {
        cin >> Fruit[i];
    }
    
    sort(Fruit.begin(), Fruit.end());
    
    for(int i = 0; i <Fruit.size(); ++i)
    {
        if(Fruit[i] <= Len)
        {
            Len++;
        }
        else
            break;
    }
    cout << Len;
}