#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    bool bSpace = true;
    for(char& c : s)
    {
        c = tolower(c);
    }
    
    for(char& c : s)
    {
        if(bSpace == true)
        {
            bSpace = false;
            c = toupper(c);            
        }
        
        if(c == ' ')
        {
            bSpace = true;
        }
        
        answer += c;
    }
    
    return answer;
}