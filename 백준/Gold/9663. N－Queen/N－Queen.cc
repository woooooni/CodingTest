#include <iostream>
#include <cmath>
using namespace std;

int N;
int Answer = 0;
int Col[15];

bool IsPossible(int Num){
    for(int i = 0; i < Num; i++){
   		// 같은 열과, 대각선 체크.
        if(Col[Num] == Col[i] || abs(Num - i) == abs(Col[Num] - Col[i])) 
            return false;
    }
    return true;
}

void Sol(int Count){
    
    if(Count == N){
        Answer++;
        return;
    }

    
    for(int i = 0; i < N; i++){
        Col[Count] = i; // Count 행 i열에 퀸을 둠(Count,i)
        if(IsPossible(Count))
        {
            Sol(Count+1);
        }
    }
}
int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    cin >> N;
    Sol(0);
    cout << Answer;

}