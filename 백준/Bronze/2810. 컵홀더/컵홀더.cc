#include <iostream>
#include <string>
#include <vector>

using namespace std;
int N;
string Info;
int main(void)
{
    cin >> N >> Info;

    string HolderInfo = "*";
    string Sum = "";
    for (int i = 0; i < Info.size(); ++i)
    {
        Sum += Info[i];
        HolderInfo += Info[i];
        if (Sum == "S" || Sum == "LL")
        {
            HolderInfo += "*";
            Sum = "";
        }
    }
    if (Sum.size() != 0)
    {
        HolderInfo += "*";
    }

    int Answer = 0;
    bool bEnable = false;
    for (int i = 0; i < HolderInfo.size(); ++i)
    {
        if (HolderInfo[i] == '*')
        {
            bEnable = true;
        }
        else
        {
            if (bEnable == true)
            {
                Answer++;
                bEnable = false;
            }
        }
    }
    if(Answer < Info.size())
        cout << Answer + 1;
    else
        cout << Answer;
}