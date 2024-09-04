#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    unordered_set<string> stringSet;
    int FindIdx = -1;
    
    stringSet.emplace(words[0]);
    for(int i = 1; i < words.size(); ++i)
    {
        string Prev = words[i - 1];
        string Current = words[i];
        if((Prev.back() != Current.front()) || (stringSet.end() != stringSet.find(words[i])))
        {
            FindIdx = i;
            break;
        }
        else
        {
            stringSet.emplace(words[i]);
        }
    }
    
    if(FindIdx == -1)
    {
        answer.push_back(0);
        answer.push_back(0);
    }
    else
    {
        answer.push_back(FindIdx % n + 1);
        answer.push_back(FindIdx / n + 1);
    }

    return answer;
}