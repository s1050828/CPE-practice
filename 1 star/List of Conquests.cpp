#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    map <string,int> map;
    for (int i = 0; i < n; i++){
        
        string country_name;
        cin >> country_name;
        auto key = map.find(country_name);
        map[country_name]++;

        getline(cin,country_name);
        //if(map.find(country_name))

    }
    for (auto& [country, count] : map){
        cout <<country << " " << count <<endl;
    }
}