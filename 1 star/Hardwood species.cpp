#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Wood{
public:
    int count;
    string name;
    Wood(string n) :name(n),count(1){};
    bool operator<(const Wood& other) const {
        return name < other.name;
    }
};

void Calculate_proportion(vector<Wood> list){
    sort(list.begin(), list.end());
    int total = 0;
    for(int k = 0 ;k < list.size();k++){
        total += list[k].count;
    }

    for(int k = 0 ;k < list.size();k++){
        float propotion = (float)list[k].count / total * 100;
        printf("%s %.4f\n", list[k].name.c_str(),propotion);        
    }
}

int main(){
    int n;
    string none;
    cin >> n ;
    cin.ignore();
    getline(cin,none);
    for (int i = 0; i < n ;i++){
        string wood_name;
        vector <Wood> wood_list;       
        while(1){
            if(!getline(cin,wood_name)) break;
            if(wood_name == "" ) break;

            bool exist = false;             
            for (int j = 0 ;j < wood_list.size() ; j++){
                if(wood_name == wood_list[j].name) {
                    wood_list[j].count++;
                    exist = true ;
                    break;
                }
            }
            if(!exist) wood_list.push_back(Wood(wood_name));
        }

        Calculate_proportion(wood_list);
        wood_list.clear();
    }
}