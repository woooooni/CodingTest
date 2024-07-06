#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for(int i = 0; i < str.length(); ++i)
    {
        string s;
        if(0 <= str[i] - 97)
            s = toupper(str[i]);
        else
            s = tolower(str[i]);
        cout << s;
    }
    
    return 0;
}