#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    bool check_skill = true;
    string sk;

    for (const auto& trees : skill_trees) 
    {
        for (const auto& k : trees) 
        {
            if (skill.find(k) != string::npos) 
            { 
                // k가 skill에 있는 스킬일 경우에만 저장
                sk.push_back(k);
            }
        }

        for (int i = 0; i < sk.length(); i++) {
            if (sk[i] != skill[i]) 
            {
                check_skill = false;
                break;
            }
        }

        if (check_skill) 
        {
            answer++;
        }
        check_skill = true;
        sk.clear();
    }
    
    return answer;
}