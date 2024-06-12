#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Map[25][25] = {};
bool Visited[25][25] = {};
                   
int DirCol[4] = {-1, 0, 1, 0};
int DirRow[4] = {0, -1, 0, 1};

int DanjiCount = 0;
int ApartCount = 0;
vector<int> ApartCounts;
                   
int N = 0;

void Dfs(int Row, int Col)
{
   for(int i = 0; i < 4; ++i)
   {
       int NextCol = Col + DirCol[i];
       int NextRow = Row + DirRow[i];
       
       if(0 > NextCol || N <= NextCol || 0 > NextRow || N <= NextRow)
           continue;
       
       if (Visited[NextRow][NextCol] == 0 && Map[NextRow][NextCol] == 1) 
       {   
           //방문 안했고 집이 있으면
           Visited[NextRow][NextCol] = 1; //방문했다고 표시하고
           ApartCount += 1; //집 개수 세기
           Dfs(NextRow, NextCol);
       }
    }
}

int main(void)
{
    cin >> N;
    string Input = "";
    
    for(int i = 0; i < N; ++i)
    {
        cin >> Input;
        for(int j = 0; j<Input.length(); ++j)
        {
            if(Input[j] == '1')
            {
                Map[i][j] = 1;
            }
            else
            {
                Map[i][j] = 0;
            }
        }
    }
    
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            if(Visited[i][j] == false && Map[i][j] == 1)
            {
                Visited[i][j] = true;
                ApartCount = 1;
                Dfs(i, j);
                ApartCounts.push_back(ApartCount);
                DanjiCount++;
            }
        }
    }
    
    sort(ApartCounts.begin(), ApartCounts.end());
    cout << DanjiCount << "\n";

    for (int i = 0; i < ApartCounts.size(); i++) 
    {
        cout << ApartCounts[i] << "\n";
    }
}
