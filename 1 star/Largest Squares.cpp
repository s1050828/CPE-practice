#include <iostream>
using namespace std;
bool judge_square(const string matrix[],const char ch,int r,int c,int len){
    for (int m = r-len ; m <= r+len;m++){
        for (int n = c-len ; n <= c+len;n++){
            if (matrix[m][n]!= ch) return false;
        }
    }
    return true;
}

int main(){
    int T;
    cin >> T ;
    for (int i = 0; i < T ;i ++){
        int M,N,Q;
        cin >>M >>N >>Q;
        cin.ignore();
        cout << M << " " << N <<" "<< Q <<" "<< endl;

        string matrix[M];
        for (int j = 0 ; j < M ;j++){
            getline(cin,matrix[j]);
        }

        for (int j = 0 ; j < Q ;j++){
            int r,c;
            cin >> r >> c;

            char ch = matrix[r][c];
            int large_sq = 1 ;
            while(1){
                if(r - large_sq < 0 || r + large_sq >= M || c - large_sq < 0 || c+large_sq >= N) break;
                else if(!judge_square(matrix,ch,r,c,large_sq)) break;
                large_sq++;
            }
            int square_len =( large_sq-1)*2+1;
            cout <<square_len<<endl;
        }
    }
}