#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<int> stringSearch(string big, string small)
{
    vector<int> result;
    int index = big.find(small);
    while(index != string::npos){
        result.push_back(index);
        index = big.find(small, index+1);
    }
    return result;
}

int main()
{
    string bigString = "I liked the movie, acting in movie was great!";
    string smallString = "movie";
    for(int i:stringSearch(bigString,smallString)){
        cout << i << endl;
    }
    return 0;
}