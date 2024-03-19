#include <iostream>
#include <string>

using namespace std;
int main()
{
#pragma region BOJ 10250
    int numHost;

    int width, height;
    cin >> numHost;

    for (int i = 0; i < numHost; ++i)
    {
        int N;
        cin >> height;
        cin >> width;
        cin >> N;
        
        int floor = N % height;
        int ho = N / height + 1;
        if (0 == floor)
        {
            floor = height;
            ho -= 1;
        }

        string roomNum = "";
        roomNum += to_string(floor);

        if (ho < 10)
            roomNum += "0";

        roomNum += to_string(ho);
        
        cout << roomNum << endl;
    }
#pragma endregion
}