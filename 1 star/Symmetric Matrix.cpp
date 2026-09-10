    #include <iostream>
    using namespace std;
    int main(){
        int T;
        cin >> T;
        for (int t = 0 ; t < T ; t++){
            char dump;
            cin >> dump >> dump;
            int N;
            cin >> N;

            long long int matrix [N][N];
            for (int i = 0 ;i < N; i++){
                for (int j = 0 ;j < N; j++){
                    cin >> matrix[i][j];
                }
            }

            bool sym = true;
            for (int i = 0 ;i < N; i++){
                for (int j = 0 ;j < N; j++){
                    if(matrix[i][j]!=matrix[N-i-1][N-j-1] || matrix[i][j] < 0){
                        sym = false ;
                        break;
                    }
                    if(!sym) break;
                }   
            }

            if(!sym) cout << "Test #"<<t+1<<": Non-symmetric."<< endl;
            else cout << "Test #"<<t+1<<": Symmetric."<< endl;
        }
    }