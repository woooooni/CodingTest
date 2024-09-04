#include <string>
#include <vector>
#include <stack>
using namespace std;


string Rotation(string Input)
{
    char Front = Input.front();
    Input.erase(Input.begin());
    Input.push_back(Front);
    
    return Input;
}

bool Check(string Input)
{
    stack<char> s;
    bool bFlag = false;
    
    for(int i =0 ; i < Input.length(); ++i)
    {
        char Front = Input[i];
        if(Front == '(' || Front == '{' || Front == '[')
        {
            s.push(Front);
            bFlag = true;
        }
        else 
        {
            if (Input[i] == ']' && s.top() == '[')
                s.pop();
            if (Input[i] == '}' && s.top() == '{')
                s.pop();
            if (Input[i] == ')' && s.top() == '(')
                s.pop();   
        }
    }
    
    return bFlag && s.empty();
}

int solution(string s) {
    int answer = 0;
    
    if(Check(s) == true)
        answer++;
    
    
    for(int i = 1; i < s.size(); ++i)
    {
        s = Rotation(s);
        
        if(Check(s) == true)
            answer++;
    }
    return answer;
}