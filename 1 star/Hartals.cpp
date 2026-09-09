#include <iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    for (int i = 0;i < T;i++){
        int N,P;
        cin >> N >> P;
        bool daylist[3650]={true};
        int hartal = 0;
        for (int k = 0;k < N;k++){
            daylist[k]=true;
        }
        for (int j = 0;j < P;j++){
            
            int hi,point;
            cin >> hi;
            point = hi;
            while (point<=N){
                daylist[point-1]=false;
                point+=hi;
            }
                   
        }
            
        int week = 7;
        int point = 5;
        while(point<=N){
            daylist[point]=true;
            daylist[point+1]=true;
            point+=week;
        }
        for (int k = 0;k < N;k++){
            if(daylist[k]==false) hartal++;
        }
        cout << hartal <<endl;
    }
}