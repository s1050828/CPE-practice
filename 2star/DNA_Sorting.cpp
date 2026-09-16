#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int unsorte(string str){
    int unsorte_num = 0;
    for(int i = 0 ; i < str.size() ; i++){
        for(int j = i + 1 ; j < str.size() ; j++){
            if(str[i] > str [j] ) unsorte_num ++;
        }
    }
    return unsorte_num;
}

bool cmp(const pair<string,int> a,const pair<string,int> b){
    return a.second < b.second;
}
int main(){
    int T;
    cin >> T;
    cin.ignore();

    for (int i = 0; i < T; i++){
        string line;
        getline(cin,line);
        
        int m,n;
        
        cin >> m >> n;
        cin.ignore();
        vector<pair<string,int>> strlist;
        for (int j = 0 ; j < n ;j++){
            getline(cin,line);
            
            if(line.size()!= m) {cout <<"Error input"<<endl;return 0;}
            
            int unsortedness = unsorte(line);
            
            strlist.push_back({line,unsortedness});     
               
        }

        stable_sort(strlist.begin(),strlist.end(),cmp);

        for (auto& [string , value] : strlist){
            cout << string << endl;
        } 

        strlist.clear();
    }
    
    cout <<endl;
}