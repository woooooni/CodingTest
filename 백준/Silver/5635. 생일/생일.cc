#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Student
{
    string Name;
    int Day;
    int Month;
    int Year;
};

int N;
vector<Student> People;

int main(void)
{
    cin >> N;
    People.resize(N);
    
    for(int i =0 ; i < N; ++i)
    {
        cin >> People[i].Name;
        cin >> People[i].Day;
        cin >> People[i].Month;
        cin >> People[i].Year;
    }
    
    sort(People.begin(), People.end(), [](const Student& Left, const Student& Right){
        if(Left.Year == Right.Year)
        {
            if(Left.Month == Right.Month)
            {
                return Left.Day < Right.Day;
            }
            else
            {
                return Left.Month < Right.Month;
            }
        }
        else
        {
            return Left.Year < Right.Year;
        }
    });
    
    cout << People[N - 1].Name << "\n";
    cout << People[0].Name;
}