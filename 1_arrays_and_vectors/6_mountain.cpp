/* Write a function that takes input an array of distinct
 intergers, and returns the length of highest mountain.
 
 A mountain is defined as adjacent integers that are strictly increasing
 until they reach a peak, at which it becomes strictly decreasing.
 
 at least 3 numbers are required to form a mountain
 
 INPUT
 arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4}
 
 OUTPUT
 9    */

 /* trick for problems which involved peaks
    1. indendify peaks
    2. */

 #include<iostream>
 #include<vector>
 
 using namespace std;

 int mountain(vector<int> a)
 {
     int n = a.size();
     int largest = 0;
     for(int i=1; i<n-1;){
         if(a[i]>a[i-1] && a[i]>a[i+1]){
             //do some work
             int cnt = 1;
             int j=i;
             //cnt backwards
             while(j >= 1 && a[j] > a[j-1]){
                j--;
                cnt++;
             }
             //cnt forwaerds
             while(i <= n-2 && a[i] > a[i+1] ){
                 i++;
                 cnt++;
             }
             largest = max(largest,cnt);
         }
         else{
             i++;
         }
     }
     return largest;
 }

 int main()
 {
     vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
     cout << mountain(arr) << endl;
 }