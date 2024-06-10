#include <iostream>
#include <vector>

using namespace std;
enum TSHIRT_SIZE{ S, M, L, XL, XXL, XXXL, END };
int main() 
{
	int N;
    int T, P;
    
    vector<int> TShirtCounts(TSHIRT_SIZE::END);
    
    cin >> N; 
    cin >> TShirtCounts[TSHIRT_SIZE::S] >> TShirtCounts[TSHIRT_SIZE::M] >> TShirtCounts[TSHIRT_SIZE::L];
    cin >> TShirtCounts[TSHIRT_SIZE::XL] >> TShirtCounts[TSHIRT_SIZE::XXL] >> TShirtCounts[TSHIRT_SIZE::XXXL];
    cin >> T >> P;
    
    int PenBundleCount = N / P;
    int PenRemainCount = N % P;
    
    
    int TShirtsBundleCount = 0;
    
     for(int i = 0; i < TShirtCounts.size(); ++i)
     {
         TShirtsBundleCount += TShirtCounts[i] / T;
         if((TShirtCounts[i] % T) != 0)
             ++TShirtsBundleCount;
     }
        
    cout << TShirtsBundleCount << endl;
    cout << PenBundleCount << " " << PenRemainCount;
    
	return 0;
}
