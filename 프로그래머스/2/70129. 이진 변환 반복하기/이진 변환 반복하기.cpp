#include <string>
#include <vector>
#include <bitset>
using namespace std;

string Current = "";

int Count = 0;
int Sum = 0;

string to_binary(int num) {
	string s = "";
	while (num > 0) {
		if (num % 2 == 1) s = "1" + s;
		else s = "0" + s;
		num >>= 1;
	}
	return s;
}

int binary_transform()
{
    int OneCount = 0;
    int ZeroCount = 0;
    
    for(int i = 0; i < Current.length(); ++i)
    {
        if(Current[i] == '1')
        {
            OneCount++;
        }
        else
        {
            ZeroCount++;
        }
    }    
    
    Sum += ZeroCount;
    Current = to_binary(OneCount);
    Count++;
    
    return Current != "1";
}

vector<int> solution(string s) {
    vector<int> answer;
    
    Current = s;
    
    while(true)
    {
        if(false == binary_transform())
        {
            break;
        }
    }
    
    answer.push_back(Count);
    answer.push_back(Sum);
    
    return answer;
}