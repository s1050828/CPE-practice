#include <iostream>
using namespace std;
int main(){
    int king_loc,queen_loc,queen_newloc;
    while (cin >> king_loc >> queen_loc >> queen_newloc){
        if(king_loc == queen_loc) {
            cout << "Illegal state" <<endl;
            continue;
        }
        else if(queen_loc == queen_newloc) {
            cout << "Illegal move" <<endl;
            continue;
        }

        int king_step[4] = {king_loc-1,king_loc+1,king_loc+8,king_loc-8};
        int dir ;
        
        //same column
        if(queen_loc%8 == queen_newloc%8) {
            if(queen_loc > queen_newloc) dir = -8;
            else dir = 8;
           
        }

        //same row
        else if(queen_loc/8 == queen_newloc/8){
            if(queen_loc > queen_newloc) dir = -1;
            else dir = 1;
        }
        
        else{
            cout << "Illegal move" <<endl;
            continue;
        }

        bool legal=true;
        while (queen_loc!=queen_newloc){
            queen_loc += dir;
            if(queen_loc == king_loc) {
                legal = false;
                break;
            }
        }
        if(!legal){
            cout << "Illegal move" <<endl;
            continue;
        }
        
        bool allow = true;
        for (int i = 0 ;i < 4 ;i ++){
                    if(king_step[i] == queen_newloc){
                        allow = false ;
                        break;
                    }
                }
        if(!allow){
            cout <<"Move not allowed"<<endl;
            continue;
        }
        if(king_loc==0&&queen_newloc == 9||
            king_loc==7&&queen_newloc == 14||
            king_loc==56&&queen_newloc == 49||
            king_loc==63&&queen_newloc == 54) {
                cout <<"Stop"<<endl;
                continue;
            }
        cout << "Continue"<<endl;

    }
}