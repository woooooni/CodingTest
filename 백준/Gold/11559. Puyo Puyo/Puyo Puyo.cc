#include<bits/stdc++.h>
#define Y first
#define X second

using namespace std;

char board[12][6];
int result;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
bool vst[12][6];

bool bfs(int y, int x, char c)
{ 
    //부셨는지 안부셨는지 return
    queue<pair<int,int>> q;
    vector<pair<int,int>> v; //size가 4 이상되면 터트리고 아니면 초기화한다.
    memset(vst, false, sizeof(vst));
    q.push({y,x});
    v.push_back({y,x});
    vst[y][x] =1;
    
    while(!q.empty()){
        auto cur = q.front(); q.pop();

        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || ny < 0 || nx >= 6 || ny >= 12 || vst[ny][nx]) continue;
            if(board[ny][nx] == c && !vst[ny][nx]){
                q.push({ny,nx});
                v.push_back({ny,nx});
                vst[ny][nx] = 1;
            }
        }
    }

    if(v.size() >= 4){
        int vs = v.size();
        for(int i=0; i< vs; i++){
            board[v[i].Y][v[i].X] = '.';
        }
        return true;
    }

    return false; //못부심
}

void down(){
    
    for(int i = 0; i< 6; i++){ //열 이동
        queue<char> q;
        for(int j =12-1; j >= 0; j--){ //맨 아래서 부터 큐에 넣는다
            if(board[j][i] != '.'){
                q.push(board[j][i]);
            }
        }
        int qs = q.size();
        for(int j=12-1; j >= 12-qs; j--){
            board[j][i] = q.front(); q.pop();
        }
        for(int j =12-qs-1; j >= 0; j--){
            board[j][i] = '.';
        }
    }
    

}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //init
    for(int i=0; i<12; i++){
        string s;
        cin >> s;
        for(int j=0; j<6; j++){
            board[i][j] = s[j];
        }
    }
    
    while(1){ 
        int flag = 0;
        for(int i=0; i<12; i++){
            for(int j=0; j<6; j++){
                if(board[i][j] != '.'){
                    if(bfs(i,j,board[i][j])){
                        flag++;
                    }
                }
            }
        }

        if(flag == 0) break;
        else{
            //하나라도 터트렸으면 다시 돌리기 위해 내리기 함수 사용
            result++;
            down();
        }

    }
    
    if(result) cout << result;
    else if(result == 0) cout << 0;

}