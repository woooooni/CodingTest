#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    
    
    int start = 0;
    int end = 1;
    int minlen = sequence.size();
    int sum = sequence[start] + sequence[end];
    
    if(sequence[0] == k)
    {
        answer.push_back(0);
        answer.push_back(0);
        return answer;
    }
    
    while(start <= end && sequence.size() > end)
    {
        if(sum < k)
        {
            sum += sequence[++end];
        }
        else if(sum == k)
        {
            if(minlen >  end - start)
            {
                answer.clear();
                answer.push_back(start);
                answer.push_back(end);
                minlen = end - start;
            }
            sum -= sequence[start++];
            sum += sequence[++end];
        }
        else
        {
            sum -= sequence[start];
            start++;
        }
    }
    
    return answer;
}