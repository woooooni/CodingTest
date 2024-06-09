#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int main(void)
{
    int A, B, C;
    string ResultString = "";
    int ResultNum = 0;
    
    cin >> A >> B >> C;
    
    ResultNum = A + B - C;
    ResultString = to_string(A) + to_string(B);
    ResultString = to_string(stoi(ResultString) - C);
    
    cout << ResultNum << endl;
    cout << ResultString << endl;
    
    return 0;
}