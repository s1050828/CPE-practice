#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    pair <double,double> p1,p2,p3,p4,out;
    while(cin >> p1.first >>p1.second >> p2.first >>p2.second >> p3.first >>p3.second >> p4.first >>p4.second){
        if(p3 == p1) p3 = p4;
        else if(p3 == p2) {p3 = p1 ; p1 = p2 ; p2 = p4;}
        else if(p4 == p2) {p2 = p1 ; p1 = p4;}

        out = pair(p3.first+p2.first - p1.first,p3.second+p2.second - p1.second);
        cout << fixed << setprecision(3) <<out.first <<" "<<out.second <<endl;
    }
}