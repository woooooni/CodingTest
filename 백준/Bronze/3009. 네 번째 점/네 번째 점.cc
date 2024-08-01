#include <iostream>
#include <vector>
using namespace std;

int main() {
	int pos_x[3];
	int pos_y[3];
	
	for(int i=0; i < 3; i++) 
        cin >> pos_x[i] >> pos_y[i];
	
	if(pos_x[0] == pos_x[1])
	{
		cout << pos_x[2];
	}
	else if(pos_x[0] == pos_x[2])
	{
		cout << pos_x[1];
	}
	else if(pos_x[1] == pos_x[2])
	{
		cout << pos_x[0];
	}
	
	cout << " ";
	
	if(pos_y[0] == pos_y[1])
	{
		cout << pos_y[2];
	}
	else if(pos_y[0] == pos_y[2])
	{
		cout << pos_y[1];
	}
	else if(pos_y[1] == pos_y[2])
	{
		cout << pos_y[0];
	}

	return 0;
}