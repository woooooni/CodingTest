#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if(arr.size() <= 1)
    {
        answer.push_back(-1);
        return answer;
    }
    
    vector<int> sortarr = arr;
    sort(sortarr.begin(), sortarr.end());
    
    arr.erase(remove_if(arr.begin(), arr.end(), [&](int value){
        return value == sortarr[0];
    }), arr.end());
    
    for(int i = 0; i < arr.size(); ++i)
    {
        answer.push_back(arr[i]);
    }
    
    return answer;
}