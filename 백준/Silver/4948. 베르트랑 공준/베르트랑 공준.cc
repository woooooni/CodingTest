#include <string>
#include <vector>
#include <iostream>

using namespace std;

int arr[1000001];

void Init()
{
    for(int i = 2; i <= 1000000;i++) 
    {
        arr[i] = i;
    }
    
    for(int i = 2; i <= 1000000; i++) {
        if(arr[i]==0) 
            continue;
        
        for(int j = 2 * i; j <= 1000000; j+=i) 
        {
            arr[j] = 0;
        }
    }
}

void Solve(int input)
{
    int answer = 0;
    int start = input;
    int end = input * 2;
    
    for(int i = start + 1; i <= end; ++i)
    {
        if(arr[i] != 0)
        {
            answer++;
        }
    }
    cout << answer << "\n";
}

int main(void)
{
    Init();
    
    while(true)
    {
        int input;
        cin >> input;
        if(input == 0)
        {
            break;
        }
        Solve(input);
    }
}


