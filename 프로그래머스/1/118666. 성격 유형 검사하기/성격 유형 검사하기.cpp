#include <string>
#include <vector>
#include <unordered_map>
#include <map>

using namespace std;

map<char, int> Scores;

void Score(string survey, int choice)
{
    if(choice < 4)
    {
        Scores[survey[0]] += 4 - choice;
    }
    else if(choice > 4)
    {
        Scores[survey[1]] += choice - 4;
    }
}

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
     
    Scores['R'] = 0;
    Scores['T'] = 0;
    Scores['F'] = 0;
    Scores['C'] = 0;
    Scores['M'] = 0;
    Scores['J'] = 0;
    Scores['A'] = 0;
    Scores['N'] = 0;
    
    
    for(int i =0 ; i < choices.size(); ++i)
    {
        Score(survey[i], choices[i]);
    }
    
    vector<string> Keys;
    Keys.push_back("RT");
    Keys.push_back("CF");
    Keys.push_back("JM");
    Keys.push_back("AN");
    
    for(int i =0 ; i < Keys.size(); ++i)
    {
        char LeftKey = Keys[i][0];
        char RightKey = Keys[i][1];
        
        int LeftScore = Scores[LeftKey];
        int RightScore = Scores[RightKey];
        
        if(LeftScore >= RightScore)
        {
            answer += LeftKey;
        }
        else
        {
            answer += RightKey;
        }
    }
    
    
    
    return answer;
}