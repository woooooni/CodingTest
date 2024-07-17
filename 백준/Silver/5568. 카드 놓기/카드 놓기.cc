#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int N, K;

vector<int> Numbers;

int main(void)
{
    cin >> N >> K;
    
    Numbers.resize(N);
    for(int i = 0; i < N; ++i)
    {
        cin >> Numbers[i];
    }
    
    sort(Numbers.begin(), Numbers.end());
    
    set<string> ResultSet;
    do
    {
        string StrTemp = "";
        for(int i =0 ; i < K; ++i)
        {
            StrTemp += to_string(Numbers[i]);
        }
        ResultSet.insert(StrTemp);
    }while(next_permutation(Numbers.begin(), Numbers.end()));
    
    cout << ResultSet.size();
}