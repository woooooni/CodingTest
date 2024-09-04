#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    map<int, int> CountMap;
    for(int i = 0; i < tangerine.size(); ++i)
    {
        int Key = tangerine[i];
        CountMap[Key]++;
    }
    
    vector<int> Counts;
    for(auto Pair : CountMap)
    {
        Counts.push_back(Pair.second);
    }
    
    sort(Counts.begin(), Counts.end(), greater<int>());
    
    int Count = 0;
    for(int i =0 ; i < Counts.size(); ++i)
    {
        if(Count >= k)
            break;
        
        answer++;
        Count += Counts[i];
    }
    
    return answer;
}