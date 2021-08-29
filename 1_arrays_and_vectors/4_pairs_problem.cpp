/* Given an array containing N integers, and a number S denoting a target sum.
Find two distinct integers that can pair up to form targer sum. Let us assume there will be only such pair.

Input
array=[10,5,2,3,-6,9,11]
S=4

Output
[10,-6] */

#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

vector<int> pairSum(vector<int> a, int sum)
{
    vector<int> result;
    unordered_set<int> s;
    for(int i=0;i<a.size(); i++){
        if(s.find(sum-a[i]) != s.end()){
            result.push_back(sum-a[i]);
            result.push_back(a[i]);
            return result;
        }
        s.insert(a[i]);
    }
    return {};   
}

int main()
{
    vector<int> arr = {10,5,2,3,-6,9,11};
    int sum = 4;
    auto p = pairSum(arr,sum);
    if(p.size() == 0){
        cout << "There is no such pair";
    }
    else{
        cout << "[" <<p[0] << "," << p[1] << "]" << endl;
    }

    return 0;
}

//to print all the pairs
// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// #include<unordered_set>

// using namespace std;

// vector<vector<int>> pairSum(vector<int> a, int sum)
// {
//     vector<vector<int>> result;
//     unordered_set<int> s;

//     for(int i=0; i<a.size(); i++){
//         if(s.find(sum-a[i]) == s.end()){
//             s.insert(a[i]);
//         }
//         else{
//             result.push_back({a[i],sum-a[i]});            
//         }
//     }
//     return result;
// }

// int main()
// {
//     vector<int> arr{10,5,2,1,3,-6,9,11,2};
//     int s=4;
//     vector<vector<int>> p = pairSum(arr,s);
//     if(p.size() == 0){
//         cout << "There is no such pair";
//     }
//     else{
//         for(auto c: p){
//             for(auto r: c ){
//                 cout << r <<",";
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }