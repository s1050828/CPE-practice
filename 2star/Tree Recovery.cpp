#include <iostream>
#include <vector>
#include <string>
using namespace std;
string postorder;
void build(string pre, string in) {
    if(in == "") return;
    char root = pre[0];
    int root_loc = in.find(root);
    string left = in.substr(0,root_loc );
    string right = in.substr(root_loc + 1);
    string preLeft = pre.substr(1, left.size());
    string preRight = pre.substr(1 + left.size());
    build(preLeft,left);
    build(preRight,right);
    postorder += root; 
}


int main(){
    string pre,in;
    while(cin >>pre >> in){
        build(pre,in);
        cout <<postorder<<endl;
        postorder ="";
    }
}
