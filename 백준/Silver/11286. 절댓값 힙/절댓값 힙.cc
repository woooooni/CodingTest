#include<iostream>
#include<queue>
#include<deque>
#include<string.h>
#include<math.h>
#include<cmath>
#include<stack>
#include<algorithm>

using namespace std;

struct cmp {
	bool operator()(int a, int b) 
    {
		if (abs(a) == abs(b)) 
        {
			if (a > b) 
            {
				return a > b;
			}
			else return b < a;
		}
		return abs(a) > abs(b);
	}
};

int main() {
	int N;
	priority_queue <int,vector<int>, cmp> pq;
	cin >> N;
	for (int i = i; i < N; ++i) 
    {
		int Input;
		cin >> Input;
		if (Input == 0) 
        {
			if (pq.empty()) 
            {
				cout << 0 << endl; // 0
			}
			else 
            {
				cout << pq.top() << endl;
				pq.pop();
			}
		
		}
		else 
        {
			pq.push(Input);
		}
		
		
	}
}