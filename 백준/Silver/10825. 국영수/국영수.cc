#include <bits/stdc++.h>

using namespace std;


//구조체
struct Student{
    string name;
    int korean;
    int english;
    int math;
};

//구조체 벡터
vector<Student> vec;

int  N;
//감소하는 순 (참조자로 받는다 -> 시간 단축)
bool comp(const Student &stA, const Student &stB){
    
    //가장 밑에 첫번째 기준을 써놓고
    if(stA.korean == stB.korean){
        if(stA.english == stB.english){
            if(stA.math == stB.math){
                //마지막 기준
                return stA.name < stB.name;
            }
            //세 번째 기준
            return stA.math > stB.math;  
        }
        //두 번째 기준
        return stA.english < stB.english;
    }
    //첫 번째 기준
    return stA.korean > stB.korean;
}

int main(){
    cin >> N;
    for(int i = 0; i<N; i++){
        Student a;
        cin >> a.name >> a.korean >> a.english >> a.math;
        vec.push_back(a);
    }
    
    sort(vec.begin(), vec.end(), comp);
    
    
    for(auto x : vec){
        cout << x.name << '\n';
    }
    return 0;
}