#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int count = -1;
int answer = 0;
string aeiou = "AEIOU";
void Dfs(string input, string target)
{
    count++;
    if(target == input)
    {
        answer = count;
        return;
    }
    if(input.size() >= 5)
    {
        return;
    }
    for(int i =0 ; i <5; ++i)
    {
        Dfs(input + aeiou[i], target);
    }
}
int solution(string word) {
    Dfs("", word);
    return answer;
}