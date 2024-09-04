#include <string>
#include <vector>

using namespace std;

vector<bool> AlphaUpper;
vector<bool> AlphaLower;
bool bSpace = false;
string solution(string my_string) {
    string answer = "";
    
    AlphaUpper.resize(28);
    AlphaLower.resize(28);
    
    for(int i =0 ; i < my_string.size(); ++i)
    {
        if(my_string[i] == ' ')
        {
            if(bSpace == false)
            {
                bSpace = true;
                answer += ' ';
            }
            continue;
        }
        
        int Idx = 0;
        if(my_string[i] >= 'a')
        {
            Idx = my_string[i] - 'a';
            if(AlphaLower[Idx] == false)
            {
                answer += my_string[i];
                AlphaLower[Idx] = true;
            }
        }
        else
        {
            Idx = my_string[i] - 'A';
            if(AlphaUpper[Idx] == false)
            {
                answer += my_string[i];
                AlphaUpper[Idx] = true;
            }
        }
    }
    
    return answer;
}