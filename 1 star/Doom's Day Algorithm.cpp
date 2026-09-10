#include <iostream>
using namespace std;
int main(){
    // 1/1 is Sat
    int T;
    int daylist[11] = {31,28,31,30,31,30,31,31,30,31,30};
    cin >> T;
    for (int i = 0 ;i <T ;i++){
        int M,D,dayID = 0;
        cin >> M >> D;
        for (int j = 0; j < M - 1;j++){
            dayID += daylist[j];
        }
        dayID += D;
        dayID%=7;

        switch (dayID)
        {
        case 0:
            cout << "Friday" <<endl;
            break;
        case 1:
            cout << "Saturday" <<endl;
            break;
        case 2:
            cout << "Sunday" <<endl;
            break; 
        case 3:
            cout << "Monday" <<endl;
            break;
        case 4:
            cout << "Tuesday" <<endl;
            break;
        case 5:
            cout << "Wednesday" <<endl;
            break;
        case 6:
            cout << "Thursday" <<endl;
            break;
        default:
            break;
        }
    }

}