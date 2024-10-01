#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    map<char, int> words;
    
    for(int i = 0; i < s.size(); ++i)
    {
        if(words[s[i]] == 0)
        {
            words[s[i]] = i + 1;
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(i + 1 - words[s[i]]);
            words[s[i]] = i + 1;
        }
    }
    
    return answer;
}