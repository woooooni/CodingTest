#include <iostream>
#include <string>

using namespace std;

int Map[100][100];

int main(void)
{
    int N;
    cin >> N;
    for(int i = 0; i < N; ++i)
    {
        int Col, Row;
        cin >> Col >> Row;
        
        for(int i = Col; i < Col + 10; ++i)
        {
            for(int j = Row; j < Row + 10; ++j)
            {
                Map[j][i] = 1;
            }
        }
    }
    
    int Area = 0;
    for(int i = 0; i < 100; ++i)
    {
        for(int j = 0; j < 100; ++j)
        {
             Area += Map[j][i];
        }
    }
    
    cout << Area;
}