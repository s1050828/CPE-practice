#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int n , scenario = 1;
    while(cin >>n && n != 0){
        vector<pair<int,int>> stone;
        for (int i = 0 ; i <n ;i++){
            int xi,yi;
            cin >>xi>>yi;
            stone.push_back({xi,yi});
        }

        //pair<int,int> Freddy = stone[0],Fiona = stone[1];
        //stone.erase(stone.begin()); stone.erase(stone.begin() + 1); 

        double edge[n][n]={0};
        for (int i = 0; i <n ;i++){
            for (int j = 0; j < n ;j++){
                if(i!=j) edge[i][j] = sqrt(pow(stone[i].first -stone[j].first, 2) + pow(stone[i].second -stone[j].second, 2));
            }
            
        }

        double minimaxDist[n] = {0};
        for (int u = 0 ; u < n ; u++){
            minimaxDist[u] = edge[0][u];
        }
        bool visited[n] = {false};
        visited[0] = true;

        for (int i = 0 ; i < n - 1; i++){
            double mindist = {INFINITY};
            int minp = -1;
            for (int j = 0 ; j < n ; j++){
                if(!visited[j] && minimaxDist[j] < mindist) {
                    mindist = minimaxDist[j];
                    minp = j;
                }
            }

            visited[minp] = true;
            for (int k = 0 ; k < n ; k++)    {
                if(!visited[k] && minimaxDist[k] > max(minimaxDist[minp],edge[minp][k]))
                    minimaxDist[k] = max(minimaxDist[minp],edge[minp][k]);
            }

            

        }



        cout << "Scenario #" << scenario ++ << endl;
        cout << "Frog Distance = " << fixed << setprecision(3) << minimaxDist[1] << endl ;
        stone.clear();
    }
}
