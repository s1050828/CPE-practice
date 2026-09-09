#include <iostream>
using namespace std;
int main(){
    int n;
    int letter_time[26]={0};
    cin >> n ;
    cin.ignore();
    for (int i = 0 ;i<n ; i++){
        string in;
        getline(cin,in);
        for (int j = 0;j<in.length();j++){
            if (int(in[j])>=65&&int(in[j])<=90){
                letter_time[int(in[j]-65)]++;
            }

            else if (int(in[j])>=97&&int(in[j])<=122){
                letter_time[int(in[j]-97)]++;
            }
        }
    }

    int upper=100000000;
    while (1){
        int max = 0;
        for (int i = 0;i<26;i++){//find max
            if (letter_time[i]>max && letter_time[i]<upper) max = letter_time[i];
        }

        if (max == 0) break;
        else {
            for (int i = 0;i<26;i++){//find max
                if (letter_time[i]==max) cout<<char(i+65)<<" "<<letter_time[i]<<endl;
            }
        }
        upper= max;
    }
}