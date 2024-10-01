#include <string>
#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <unordered_set>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; 

    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    unordered_set<int> nums;

    sort(numbers.begin(), numbers.end());

    do {
        for (int i = 1; i <= numbers.size(); ++i) {
            string temp = numbers.substr(0, i);
            int num_temp = stoi(temp);
            if (isPrime(num_temp)) 
            {
                nums.insert(num_temp);
            }
        }
    } while (next_permutation(numbers.begin(), numbers.end()));

    return nums.size();
}
