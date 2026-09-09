#include <iostream>
#include <map>
using namespace std;
void print(const int list[10]){
    for (int i = 0;i < 10;i++){
        if(i!=9) cout <<list[i]<<" ";
        else cout << list[i] << endl;
    }
    
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    for(int i = 0;i < t ;i ++){
        string input ;
        map<char,string> m={
        {'c',"0111001111"},{'C',"0010000000"},
        {'d',"0111001110"},{'D',"1111001110"},
        {'e',"0111001100"},{'E',"1111001100"},
        {'f',"0111001000"},{'F',"1111001000"},
        {'g',"0111000000"},{'G',"1111000000"},
        {'a',"0110000000"},{'A',"1110000000"},
        {'b',"0100000000"},{'B',"1100000000"},
        };
        int finger_time[10]={0};

        getline(cin,input);
        if(input=="") {print(finger_time);continue;}
        
        
        string prev_fin,cur_fin;
        prev_fin = "0000000000";
        for (int i = 0;i < input.size() ; i++){
            cur_fin = m[input[i]];

            for (int j = 0;j < 10 ; j++){
                //cout <<prev_fin[j]<< " "<<cur_fin[j]<<endl;
                if(prev_fin[j] == '0' && cur_fin[j] == '1') finger_time[j]++ ;
                
            }
            prev_fin = cur_fin;
        } 
        print(finger_time);
    }

}