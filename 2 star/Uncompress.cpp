#include <iostream>
#include <vector>
using namespace std;
int main(){
    string line;
    vector <string> wordlist;
    while(getline(cin,line) && line!="0"){
        if(line == "") continue;

        string word = "",number="";
        for (int i = 0 ;i < line.size() ; i++){
            char ch = line[i];
            if(ch == ' '){
                
                if(word!=""){
                    wordlist.push_back(word);
                    word ="";
                }
                else if(number!=""){
                    int num = stoi(number);
                    cout << wordlist[wordlist.size() - num ] ;
                    string temp = wordlist[wordlist.size() - num ];
                    wordlist.erase(wordlist.end()- num); 
                    wordlist.push_back(temp);
                    number = "";
                }
                cout << ch;
                
            }
            else if( (ch>='a' && ch<='z') ||  (ch>='A' && ch<='Z') ){
                cout << ch;
                word.push_back(ch);
            }
            else if( (ch>='0' && ch<='9') )number.push_back(ch);
            else {
                if(word!=""){
                    wordlist.push_back(word);
                    word ="";
                }
                else if(number!=""){
                    int num = stoi(number);
                    cout << wordlist[wordlist.size() - num ] ;
                    string temp = wordlist[wordlist.size() - num ];
                    wordlist.erase(wordlist.end()- num); 
                    wordlist.push_back(temp);
                    number = "";
                }
                cout << ch;
            }
            

        }
        if(word!=""){
                    wordlist.push_back(word);
                    word ="";
        }else if(number!=""){
            int num = stoi(number);
            cout << wordlist[wordlist.size() - num ] ;
                    string temp = wordlist[wordlist.size() - num ];
                    wordlist.erase(wordlist.end()- num); 
                    wordlist.push_back(temp);
                    number = "";
        }
        cout << endl;
        
    }
    return 0 ;
}