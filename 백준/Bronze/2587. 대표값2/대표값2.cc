#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    vector<int> Numbers;
    
    int Number = 0;
    int Sum = 0;
    for(int i = 0; i < 5; ++i)
    {
        cin >> Number;
        Numbers.push_back(Number);
        Sum += Number;
    }
    
    stable_sort(Numbers.begin(), Numbers.end(), less_equal<int>());
    
    cout << Sum / 5 << endl;
    cout << Numbers[2] << endl;
    
}