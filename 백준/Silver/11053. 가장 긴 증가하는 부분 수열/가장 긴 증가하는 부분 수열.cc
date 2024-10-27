#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
 
vector<int> v;
 
int main() {
    int n;
    cin >> n;
    v.push_back(INT_MAX);
    for (int i = 0; i < n; i++) 
    {
        int input;
        cin >> input;
        if (v.back() < input) 
        {
            v.push_back(input);
        } else 
        {
            *lower_bound(v.begin(), v.end(), input) = input;
        }
    }
    cout << v.size();
    return 0;
}