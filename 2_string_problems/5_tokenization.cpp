/* Tokenizing a string denotes splitting a string wrt some delimiter(s)

INPUT
"today is a sunny day" 

OUTPUT
"today","is","a","sunny","day" */

#include<iostream>
#include<sstream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string input;
    getline(cin,input);
    stringstream ss(input);
    string token;
    vector<string> tokens;
    while(getline(ss,token,' '))
    {
        tokens.push_back(token);
    }
    for(auto p: tokens)
    {
        cout << "'" << p << "'" << ",";
    }
    return 0;
}

/*
#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int main(){
    char input[1000];
    cin.getline(input,1000);
    char *token = strtok(input," ");
    while(token != NULL){
        cout << token << ",";
        token = strtok(NULL," ");
    }
    return 0;
}
*/