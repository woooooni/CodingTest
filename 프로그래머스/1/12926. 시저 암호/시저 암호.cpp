#include <string>
#include <vector>

using namespace std;

string transfer(string input, int n)
{
    string temp = "";
    for(int i = 0; i < input.size(); ++i)
    {
        char character = input[i];
        if(character == ' ')
        {
            temp += ' ';
        }
        else if(character < 97)
        {
            // 대문자
            if('Z' < character + n)
            {
                temp += character + n - 26;
            }
            else
            {
                temp += character + n;
            }
        }
        else
        {
            // 소문자
            if('z' < character + n)
            {
                temp += character + n - 26;
            }
            else
            {
                temp += character + n;
            }
        }
    }
    
    return temp;
    
}

string solution(string s, int n) {
    string answer = transfer(s, n);
    return answer;
}