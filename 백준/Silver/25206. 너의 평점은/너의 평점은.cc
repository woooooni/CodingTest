#include <iostream>
 
using namespace std;
 
int main() 
	{
		//C++의 입출력 성능 향상을 위한 설정
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    double  tot_credit = 0, total = 0;// tot_credit: 내가 들은 학점들의 총합
												//total: 받은 성적과 과목 학점 곱의 총합 
    for (int i = 0; i < 20; ++i)
    {
        string name;
        cin >> name;//과목이름 입력
 
        double credit;
        cin >> credit;//들은 과목의 학점 입력
 
        string grade;
        cin >> grade;//받은 학점 입력
 
        if (grade == "P")//p를 받은 경우 나머지 건너 뛰기
            continue;
        else if (grade == "A+")//학점에 대한 총 점수와 총 들은 학점 수 계산
        {
            total += credit * 4.5;
            tot_credit += credit;
        }
        else if (grade == "A0")
        {
            total += credit * 4.0;
            tot_credit += credit;
        }
        else if (grade == "B+")
        {
            total += credit * 3.5;
            tot_credit += credit;
        }
        else if (grade == "B0")
        {
            total += credit * 3.0;
            tot_credit += credit;
        }
        else if (grade == "C+")
        {
            total+= credit * 2.5;
            tot_credit += credit;
        }
        else if (grade == "C0")
        {
            total += credit * 2.0;
            tot_credit += credit;
        }
        else if (grade == "D+")
        {
            total += credit * 1.5;
            tot_credit += credit;
        }
        else if (grade == "D0")
        {
            total += credit * 1.0;
            tot_credit += credit;
        }
        else if (grade == "F")
        {
            tot_credit += credit;
        }
 
    }
 
    double answer = total / tot_credit;// 학점평균 구하는 코드
    cout << answer;
 
    return 0;
}