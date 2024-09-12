#include <string>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, vector<string>> MapClothes;
    
    for(int i =0 ; i < clothes.size(); ++i)
    {
        MapClothes[clothes[i][1]].push_back(clothes[i][0]);
    }
    
    for(auto Pair : MapClothes)
    {
        answer *= (Pair.second.size() + 1);
    }
    
    return answer - 1;
}