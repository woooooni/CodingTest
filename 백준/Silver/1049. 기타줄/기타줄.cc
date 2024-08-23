#include <iostream>
#include <limits.h>

using namespace std;


int N, M;

int MinSetPrice = INT_MAX;
int MinOnePrice = INT_MAX;

int main(void)
{
    cin >> N >> M;
    
    for(int i =0 ; i < M; ++i)
    {
        int SetPrice;
        int OnePrice;
        
        cin >> SetPrice;
        cin >> OnePrice;
        
        MinSetPrice = min(MinSetPrice, SetPrice);
        MinOnePrice = min(MinOnePrice, OnePrice);
    }
    
    int Result = (((N / 6) * MinSetPrice)) + ((N % 6) * MinOnePrice);
    Result = min(Result, ((N) / 6 + 1) * MinSetPrice);
    Result = min(Result, N * MinOnePrice);
    
    cout << Result;
}