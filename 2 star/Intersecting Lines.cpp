#include <iostream>
#include <utility>
#include <iomanip>

using namespace std;
int main(){
    int N ;
    cout << "INTERSECTING LINES OUTPUT" <<endl;
    cin >> N;
    for (int i = 0 ;i < N ; i++){
        pair <double ,double> l1,l2,l3,l4;
        cin >> l1.first >> l1.second >> l2.first >> l2.second>> l3.first >> l3.second>> l4.first >> l4.second;
        
        //y = ax + b
        double a1,a2;

        //vertical
        if(l1.first == l2.first && l3.first == l4.first ){
            if(l1.first == l3.first) cout <<"LINE"<<endl;
            else cout << "NONE" <<endl;;
            continue;
        }
        

        a1 = (l1.second - l2.second)/(l1.first - l2.first);
        a2 = (l3.second - l4.second)/(l3.first - l4.first);
        double b1 = l1.second - a1 * l1.first;
        double b2 = l3.second - a2 * l3.first;

        if (l1.first == l2.first){
            double x = l1.first;
            double y = a2 * x + b2;
            cout << "POINT " <<fixed<< setprecision(2) << x <<" " <<y <<endl;
            continue;
        }
        else if (l3.first == l4.first){
            double x = l3.first;
            double  y = a1 * x + b1;
            cout << "POINT " <<fixed<< setprecision(2) << x <<" " <<y <<endl;
            continue;
        }

        if(a1 == a2){
            if(b1 == b2) cout <<"LINE"<<endl;
            else cout << "NONE" <<endl;
        }
        else {
            double x = (b2 - b1)/(a1-a2);
            double  y = a1 * x + b1;
            cout << "POINT " <<fixed<< setprecision(2) << x <<" " <<y <<endl;
        }

    }
    cout <<"END OF OUTPUT"<<endl;
}