#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N ;i++){
        int r,list[500]={0};
        cin >> r;
        for (int j = 0;j < r ;j++){
            cin >> list[j];
        }

        int min;
        for (int j = 0;j < r ;j++){
            int current=list[j];
            int total=0;
            for (int k = 0;k < r ;k++){
                int distance=list[k]-current;
                if(distance<0) distance = -distance;
                total += distance;
            }
            if(j == 0) min = total;
            else if(total<min) min = total;

        }

        cout <<min <<endl;
    }
}