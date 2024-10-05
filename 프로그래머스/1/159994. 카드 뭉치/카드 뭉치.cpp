#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    
    int oneselect = 0;
    int twoselect = 0;
    for(int i =0 ; i < goal.size(); ++i)
    {
        string current = goal[i];
        if(cards1[oneselect] == current)
        {
            cout << cards1[oneselect] << " ";
            oneselect++;
        }
        else if(cards2[twoselect] == current)
        {
            cout << cards2[twoselect] << " ";
            twoselect++;
        }
        else
        {
            return "No";
        }
    }
    
    return answer;
}