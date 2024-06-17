#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{   
    int N;
    int GroupCount = 0;
    cin >> N;
    
    string Input;
    for(int i = 0; i< N; ++i)
    {
        cin >> Input;
        
        string PrevAlphabet = "";
        
        bool IsGroup = true;
        vector<int> AlphabetCount(26, 0);
        
        for(int j = 0; j < Input.length(); ++j)
        {   
            string CurAlphabet = to_string(Input[j]);
            int Index = Input[j] - 'a';
            
            if(0 < AlphabetCount[Index] && PrevAlphabet != CurAlphabet)
            {
                IsGroup = false;
                break;
            }
            else
            {
                AlphabetCount[Index]++;
                PrevAlphabet = CurAlphabet;
            }
        }
        
        if(true == IsGroup)
            GroupCount++;
    }
    
    cout << GroupCount;
    
}