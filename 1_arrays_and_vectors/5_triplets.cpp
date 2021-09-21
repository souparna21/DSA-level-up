/* Given an array containing N integers, and a number S denoting a targert sum.
Find all distinct integers that can add up to form targert sum. The numbers in triplet
should be ordered too.
Return empty array if no such triplet exists.

INPUT
array = [6,4,2,5,15,7,9,1,8,3]
target =18

OUTPUT
[1,2,15,
1,8,9,
2,7,9,
3,6,9,
3,7,8,
4,5,9,
4,6,8,
5,6,7,] */

 #include<iostream>
 #include<vector>
 #include<algorithm>

 using namespace std;

 vector<vector <int>> triplet(vector<int> a, int targetSum)
 {
     sort(a.begin(),a.end());
     vector<vector<int>> result;
     int n = a.size();

     for(int i=0; i < n-2; i++){
         int j = i+1;
         int k = n-1;
         while (j<k)
         {
             if(a[i]+a[j]+a[k] == targetSum){
                 result.push_back({a[i],a[j],a[k]});
                 j++;
                 k--;
             }
             else if(a[i]+a[j]+a[k] < targetSum){
                 j++;
             }
             else
                 k--;
         }
     }
     return result;
 }

 int main()
 {
     vector<int> arr{6,4,2,5,15,7,9,1,8,3};
     int sum=18;
     auto result = triplet(arr,sum);
     for(auto r: result){
         for(auto c: r){
             cout << c << ',';
         }
         cout << endl;
     }

 }