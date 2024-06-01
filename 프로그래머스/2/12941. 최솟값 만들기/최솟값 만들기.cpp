#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    
    stable_sort(A.begin(), A.end(), less_equal<int>());
    stable_sort(B.begin(), B.end(), greater_equal<int>());
    
    for(int i = 0; i < A.size(); ++i)
    {
        answer += A[i] * B[i];
    }
    

    return answer;
}