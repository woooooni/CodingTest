#include <iostream>
#include <string>

using namespace std;
int main(void)
{
    int T;
    
    cin >> T;
    int A, B;
    for(int i = 1; i <= T; ++i)
    {
        cin >> A >> B;
        cout << "Case #" << i << ": " << A << " + " << B <<  " = " << A + B << "\n";
    }
    
}