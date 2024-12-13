#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>
#include <queue>
#include <cstring>
#define INF 987654321
using namespace std;

int n, m,time;
string a, b;
string newA;
vector<pair<char, int>> vec;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	cin >> a >> b;
	for (int i = a.size()-1; i >= 0; i--)
	{
		newA += a[i];
	}
	cin >> time;


	for (int i = 0; i < newA.size(); i++)
	{
		vec.push_back({ newA[i],1 });
	}
	for (int i = 0; i < b.size(); i++)
	{
		vec.push_back({ b[i],2 });
	}
	while (time > 0)
	{

		for (int i = 0; i < vec.size() - 1; i++)
		{
			if (vec[i].second == vec[i + 1].second)
			{
				continue;
			}
			else
			{
				if (vec[i].second == 1)
				{
					char tmpC = vec[i].first;
					int tmpD = vec[i].second;
					vec[i].first = vec[i + 1].first;
					vec[i].second = vec[i + 1].second;
					vec[i + 1] = { tmpC,tmpD };
					i++;
				}
			}
		}
		time--;
	}
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i].first;
	}
}