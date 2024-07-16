#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> Numbers;
vector<string> Inequals;

int N;

long long int AnsMin = 9999999999; 
long long int AnsMax = 0;

string AnsMaxStr = "";
string AnsMinStr = "";

bool Check()
{
    for(int i = 0;  i < Inequals.size(); ++i)
    {
        if(Inequals[i] == ">")
        {
            if(Numbers[i] < Numbers[i + 1])
                return false;
        }
        else
        {
            if(Numbers[i] > Numbers[i + 1])
                return false;
        }
    }
    return true;
}

void Restore()
{
    string TempStr = "";
            
    for(int i =0; i <= Inequals.size(); ++i)
    {
        TempStr += to_string(Numbers[i]);
    }

    long long int TempResult = stoll(TempStr);
    if(TempResult < AnsMin)
    {
        AnsMin = TempResult;
        AnsMinStr = TempStr;
    }

    if(TempResult > AnsMax)
    {
        AnsMax = TempResult;
        AnsMaxStr = TempStr;
    }
}
int main(void)
{
    cin >> N;
    for(int i =0 ; i < N; ++i)
    {
        string Input;
        cin >> Input;
        Inequals.push_back(Input);
    }
    
    for(int i =0 ; i <= 9; ++i)
    {
        Numbers.push_back(i);
    }
    
    do
    {   
        if(true == Check())
        {
            Restore();
        }
        
    }while(next_permutation(Numbers.begin(), Numbers.end()));
    
    cout << AnsMaxStr << "\n";
    cout << AnsMinStr << "\n";
}

