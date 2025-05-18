#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> strVec;
int getStrNum(string a)
{
    int sum = 0;
    for(int i = 0; i < a.size(); ++i)
    {
        if(a[i] >= '0' && a[i] <= '9')
            sum += int(a[i]) - 48;
    }
    
    return sum;
}
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    strVec.reserve(N);
    for(int i = 0; i < N; ++i)
    {
        string input;
        cin >> input;
        strVec.push_back(input);
    }
    
    sort(strVec.begin(), strVec.end(), [](string a, string b){
        if(a.size() != b.size())
        {
            return a.size() < b.size();
        }
        
        int sumA = getStrNum(a);
        int sumB = getStrNum(b);
        if(sumA != sumB)
        {
            return sumA < sumB;
        }
        
        return a < b;
    });
    
    for(int i = 0; i < N; ++i)
    {
        cout << strVec[i] << "\n";
    }
}