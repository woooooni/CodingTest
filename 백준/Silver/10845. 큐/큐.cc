#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> q;
	int N;
	string command;
	int num;
	int result = 0;

	cin >> N;

	for (int i = 0; i < N; i++) 
    {
		cin >> command;

		if (command == "push") 
        {
			cin >> num;
			q.push(num);
		}

		else if (command == "pop") {
			if (q.size() == 0) 
            {
				result = -1;
				cout << result << endl;
			}
			else 
            {
				result = q.front();
				cout << result << endl;
				q.pop();
			}
		}


		else if (command == "size") 
        {
			cout << q.size() << endl;
		}


		else if (command == "empty") {
			if (q.size() == 0) 
            {
				result = 1;
				cout << result << endl;
			}
			else 
            {
				result = 0;
				cout << result << endl;
			}		
		}

		// 5. front
		else if (command == "front") {
			if (q.size() == 0) 
            {
				result = -1;
				cout << result << endl;
			}
			else 
            {
				result = q.front();
				cout << result << endl;
			}
		}

		// 6. back
		else if (command == "back") 
        {
			if (q.size() == 0) 
            {
				result = -1;
				cout << result << endl;
			}
			else 
            {
				result = q.back();
				cout << result << endl;
			}
		}
	}

	return 0;
}
