#include <iostream>
#include <queue>
using namespace std;
 
int n, w, L, ans, a[1000];
queue<int> q;
 
void input()
{
    cin >> n >> w >> L;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void solve()
{
    int weightSum = 0;
    for(int i = 0; i < n; i++) {
        while(true) {
            if(q.size() == w) {
                weightSum -= q.front();
                q.pop();
            }
            if(a[i] + weightSum <= L) {
                break;
            }
            q.push(0);
            ans++;
        }
        q.push(a[i]);
        weightSum += a[i];
        ans++;
    }
}

int main()
{
    input();
    solve();
    cout << ans + w;
    return 0;
}