#include <iostream>

using namespace std;
int main()
{
#pragma region BOJ 8958
    int numQuestion = 0;
    cin >> numQuestion;
    for (int i = 0; i < numQuestion; ++i)
    {
        string question;
        cin >> question;

        int score = 0;
        int totalscore = 0;
        for (int j = 0; j < question.size(); ++j)
        {
            if (question[j] == 'O')
            {
                totalscore += (++score);
            }
            else
            {
                score = 0;
            }
        }

        cout << totalscore << endl;
    }
    
#pragma endregion
}