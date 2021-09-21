#include<vector>
#include<iostream>
#include<string>
using namespace std;

int main(){
    //vector declaration
    vector<int> a;

    //vector initialization
    vector<int> arr = {1,2,3,5,7,8}; // vector<int> arr{1,2,3,5,7,8};

    //delete the last element of the vector
    arr.pop_back();

    //add an element in a vector
    arr.push_back(19);

    //insert multiple element at particular positon
    arr.insert(arr.begin()+3,{45,23,12,67});

    //print the array size
    cout << arr.size() << endl;

    //capasity of array or size of the underleying memory 
    cout << arr.capacity() << endl;

    // take input values from user and store in vector
    int n,k;
    vector<int> a;
    for(int i=0; i<n; i++){
        cin >> k;
        a.push_back(k);
    }

    //print the array using for-each loop
    for(int i: arr){
        cout << i << "\t";
    }
    
    //fill constructor
    vector<int> array(10,7); // vector<int> k(size,value)

    //print the vector using for loop
    for(int i=0; i<array.size(); i++){   // don't use for-each loop here
        cout << array[i];
    }

    
    return 0;
}