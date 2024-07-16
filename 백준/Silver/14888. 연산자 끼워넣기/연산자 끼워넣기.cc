#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

enum OPERATORS { PLUS, MINUS, MULTIPLY, DIVIDE, END };

using namespace std;

int N;
vector<int> Nums;
vector<OPERATORS> Operators;
vector<int> Results;

void Input()
{
    cin >> N;
    Nums.reserve(N);
    for(int i =0 ; i < N; ++i)
    {
        int Input;
        cin >> Input;
        Nums.push_back(Input);
    }
    
    for(int i =0 ; i < OPERATORS::END; ++i)
    {
        int NumOper;
        cin >> NumOper;
        
        switch(i)
        {
            case OPERATORS::PLUS:
                for(int Num = 0; Num < NumOper; ++Num)
                {
                    Operators.push_back(OPERATORS::PLUS);
                }
                break;
            case OPERATORS::MINUS:
                for(int Num = 0; Num < NumOper; ++Num)
                {
                    Operators.push_back(OPERATORS::MINUS);
                }
                break;
            case OPERATORS::MULTIPLY:
                for(int Num = 0; Num < NumOper; ++Num)
                {
                    Operators.push_back(OPERATORS::MULTIPLY);
                }
                break;
            case OPERATORS::DIVIDE:
                for(int Num = 0; Num < NumOper; ++Num)
                {
                    Operators.push_back(OPERATORS::DIVIDE);
                }
                break;
        }
    }
}

void Solve()
{   
    
    do
    {
        int Num = Nums[0];
        for(int i =1; i < Nums.size(); ++i)
        {
            switch(Operators[i - 1])
            {
                case OPERATORS::PLUS:
                    Num += Nums[i];
                    break;
                case OPERATORS::MINUS:
                    Num -= Nums[i];
                    break;
                case OPERATORS::MULTIPLY:
                    Num *= Nums[i];
                    break;
                case OPERATORS::DIVIDE:
                    Num /= Nums[i];
                    break;
            }
        }
        
        Results.push_back(Num);
    } while(next_permutation(Operators.begin(), Operators.end()));
    
    sort(Results.begin(), Results.end());
    
    cout << Results[Results.size() - 1] << "\n";
    cout << Results[0];
}

int main()
{
    Input();
    Solve();
    
}