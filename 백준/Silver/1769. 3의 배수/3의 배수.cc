#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0;
    while(s.size() > 1)
    {
        int sum = 0;
        for(int i = 0; i < s.size(); i++)
        {
            sum += s[i] - '0';
        }
        s = to_string(sum);
        count++;
    }

    cout << count << "\n";
    if(stoi(s) % 3 == 0)
        cout << "YES";
    else
        cout << "NO";
}