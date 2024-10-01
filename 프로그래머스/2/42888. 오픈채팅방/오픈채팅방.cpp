#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

vector<string> CumstomSplit(string input, char delim = ' ')
{
    vector<string> result;
    string sum = "";
    for (int i = 0; i < input.size(); ++i)
    {
        if (input[i] == delim)
        {
            result.push_back(sum);
            sum = "";
            continue;
        }

        sum += input[i];
    }

    if (sum.size() > 0)
    {
        result.push_back(sum);
    }

    return result;
}

vector<pair<string, string>> logs;
map<string, string> userinfo;

vector<string> solution(vector<string> record) 
{
    vector<string> answer;
    for (size_t i = 0; i < record.size(); ++i)
    {
        const vector<string> cmd = CumstomSplit(record[i]);
        if (cmd[0] == "Enter")
        {
            userinfo[cmd[1]] = cmd[2];
            logs.push_back({ cmd[1], "님이 들어왔습니다." });
        }
        else if (cmd[0] == "Leave")
        {
            logs.push_back({ cmd[1], "님이 나갔습니다." });
        }
        else if (cmd[0] == "Change")
        {
            userinfo[cmd[1]] = cmd[2];
        }
    }

    for (int i = 0; i < logs.size(); ++i)
    {
        answer.push_back(userinfo[logs[i].first] + logs[i].second);
    }


    return answer;
}
