#include <iostream>
#include <algorithm>

using namespace std;
#define MAX 9

int N,M;
int first[MAX];
int arr[MAX];
bool visited[MAX];

void dfs(int num, int k) { //현재 위치
    if(k==M) { //목표인 M까지 도달했다면
        for(auto i =0;i<M;i++)
            cout << arr[i] << " "; //arr에 저장한 값 M개 만큼 출력
        cout << "\n";
    }else { //목표에 도달하지 않았다면
        for(auto i=num; i<=N;i++) { //오름차순!
            if(!visited[i]) { //방문 안 했다면
                visited[i]=true; //방문 표시
                arr[k]=first[i-1]; // 정렬한 N값을 arr에 저장
                dfs(i+1,k+1); //더 깊게 들어가자. (M까지)
                visited[i]=false; //백트래킹 설정 
            }
        }
    }
}

int main() {
    cin >> N >> M;

    for(int i=0;i<N;i++)
        cin >> first[i];
    
    sort(first,first+N); //정렬

    dfs(1,0);
}