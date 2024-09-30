
#include <string>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    
    unordered_map<int,int> brother; // 동생
    unordered_map<int,int> cheolsu; // 철수
    
    for(int i = 0; i < topping.size();i++)
    {
        brother[topping[i]] += 1;
    }
    for(int i = 0; i < topping.size();i++)
    {
        if(brother.find(topping[i]) != brother.end())
        {
            brother[topping[i]] -= 1;
            cheolsu[topping[i]] += 1;
            
            if(brother[topping[i]] == 0)
            { 
                brother.erase(topping[i]);
            }
        }
        
        if(cheolsu.size() == brother.size())
            answer++;
    }
    return answer;
}