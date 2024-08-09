#include <iostream>
#include <string>

using namespace std;
 
int main(){
 
    string documents, word;
    getline(cin,documents);
    getline(cin, word);
    
    int ans = 0;
    
    int wordLen = (int)word.length();
    
    if(documents.length() < wordLen) 
        cout << 0;
    else
    {
        for(int i = 0; i<=documents.length()-wordLen; i++)
        {
            if(documents[i] == word[0])
            {
                string sub = documents.substr(i, wordLen);
                if(sub == word)
                {
                    ans++;
                    i += (wordLen -1);
                }
            }
        }
        
        cout << ans;
    }
 
    return 0;
}