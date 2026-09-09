#include <iostream>
#include <numeric>
using namespace std;

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        string S1,S2;
        int pair = 1;
        while(cin >> S1 >> S2){
            int s1 = 0 ,s2 = 0;
            int bit = 1;
            for (int j = S1.length() - 1; j >= 0 ; j--){
                if (S1[j] == '1') s1 += bit;
                bit *= 2;
            }

            bit = 1;
            for (int j = S2.length() - 1; j >= 0 ; j--){
                if (S2[j] == '1') s2 += bit ;
                bit *= 2;
            }

            int GCD = gcd(s1,s2);

            cout << "Pair #"<<pair++<<": ";
            if(GCD!=1) cout <<"All you need is love!"<<endl;
            else cout <<"Love is not all you need!"<<endl;
        }

        
    }
}