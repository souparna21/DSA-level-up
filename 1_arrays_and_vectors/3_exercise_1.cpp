/* Write a fizzbuzz function that returns a vector string with the numbers 
from 1 to n with the following restrictions:
=> for multiples of 3 store "Fizz"
=> for multiples of 5 sotre "Buzz"
=> for multiples of both 3 and 5 store "FizzBuzz"

 */


#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> fizzbuzz(int n){
    vector<string> result;
    for(int i=1;i<=n;i++){
        if(i % 15==0){
        result.push_back("FizzBuzz");
    }
    else if(i % 5==0){
        result.push_back("Buzz");
    }
    else if(i % 3==0){
        result.push_back("Fizz");
    }
    else{
        result.push_back(to_string(i));
    }
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    vector<string> output = fizzbuzz(n);
    for(auto x: output){
        cout << x << ",";
    }
}