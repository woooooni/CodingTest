#include <iostream>
using namespace std;

int main() {
	int A, B, V;
	int answer;
	cin >> A >> B >> V;
	
	//하루만에 올라갈 수 있을 때
	if(V <= A) 
        answer = 1;
	else
    {
		V -= A;
		if(V % (A - B)) 
            answer = V / (A - B) + 2;
		else 
            answer = V / (A - B) + 1;
	}
	cout << answer;
	
}