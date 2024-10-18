#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> numbers;

int main(void)
{
    int Answer = 0;
    cin >> N;
    
    numbers.resize(N);
    
    for(int i =0 ; i < N; ++i)
    {
        cin >> numbers[i];
    }
    
    sort(numbers.begin(), numbers.end());
    
    
    for(int i = 0; i < N; ++i)
    {
        int start = 0;
        int end = N - 1;
        
        int target = numbers[i];
        
        while(start < end)
        {
            int sum = numbers[start] + numbers[end];
            if(sum > target)
            {
                end--;
            }
            else if(sum < target)
            {
                start++;
            }
            else
            {
                if(start != i && end != i) 
                {
                    Answer++;
                    break;
                }
                else if(start == i)   
                {
                    start++;
                }
                else if(end == i)   
                {
                    end--;
                }
            }
        }
    }
    
    cout << Answer;
    
    
    
}