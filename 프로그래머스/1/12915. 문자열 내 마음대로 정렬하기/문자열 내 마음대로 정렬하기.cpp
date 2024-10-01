#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    sort(strings.begin(), strings.end(), [&](string left, string right){
            if(left[n] == right[n])
            {
                return left < right;
            }
            else
            {
               return left[n] < right[n];
            }
    });
    
    
    return strings;
}