#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> FirstArr;
vector<int> SecondArr;

int main(void)
{

    int N, M;
    cin >> N >> M;
    
    FirstArr.resize(N + M);
    
    for(int i =0 ; i < FirstArr.size(); ++i)
    {
        cin >> FirstArr[i];
    }
    
    sort(FirstArr.begin(), FirstArr.end());
    
    for(int i  =0  ; i <FirstArr.size(); ++i)
    {
        cout << FirstArr[i] << " ";
    }
}