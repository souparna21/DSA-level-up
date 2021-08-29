#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    // declarition of 2d vector
    vector< vector<int> > arr = {{1,2,3},{5,8,6,4,6},{55,34,12},{34,54}};

    //access and increment the value of a particular element in 2d vector
    arr[0][0] += 10;

    //print 2d vector
    for(int i; i < arr.size(); i++){
        for(int j:arr[i]){
            cout << j << ",";
        }
        cout << endl;
    }
}