#include <bits/stdc++.h>

using namespace std;


int N;
vector<string> vec;
map<string, int> m;

int main()
{
    cin >> N;

    for(int i = 0; i<N; i++){
        string s;
        string target;
        cin >> s;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '.'){
                target = s.substr(i+1);
                if(m.count(target)){
                    m[target]++;
                }else{
                    m.insert({target, 1});
                }
                break;
            }
            
        }
        vec.push_back(target);
        
    }
    
    sort(vec.begin(), vec.end());
    
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    
    for(auto x : vec){
        cout << x << ' ' << m[x] << '\n';
    }
    
    
    return 0;
}