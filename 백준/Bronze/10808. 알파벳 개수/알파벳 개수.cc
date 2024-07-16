#include <iostream>
#include <string>

using namespace std;

string Input;
int Nums[26];
int main(void)
{
    cin >> Input;
    
    for(int i =0 ; i < Input.length(); ++i)
    {
        Nums[Input[i] - 'a']++;
    }
    
    for(int i =0 ; i < 26; ++i)
    {
        cout << Nums[i] << " ";
    }
    
}