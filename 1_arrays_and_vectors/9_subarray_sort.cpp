/* Given an array of size at least two, find the smallest subarray
that needs to be sorted in place so that entire input array become sorted.
 if the input aray is alrady sorted, the function should return [-1,-1],
 otherwise return the start and end index of smallest subarray.
 
 INPUT
 a1=[1,2,3,4,5,8,6,7,9,10,11]
 OUTPUT
 [5,7] */ 

 #include<iostream>
 #include<vector>

 using namespace std;

 bool outOfOrder(vector<int> a, int i, int x)
 {
     if(i == 0){
         return x>a[1];
     }
     else if(i == a.size()-1){
         return x<a[i-1];
     }
     else{
         return x>a[i+1] || x<a[i-1]; 
     }
 }

pair<int,int> subArray(vector<int> a)
{
    int left=0;
    int right=a.size()-1;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=0; i<a.size(); i++){
        int x=a[i];
        if(outOfOrder(a,i,x)){
            smallest = min(smallest,x);
            largest = max(largest,x);
        }
    }
        if(smallest == INT_MAX){
            return {-1,-1};
        }
        while(a[left] <= smallest){
            left++;
        }
        while(a[right] >= largest){
            right--;
        }
    return {left,right};
}

 int main()
 {
     vector<int> arr{1,2,3,4,5,8,6,7,9,10,11};
     auto p=subArray(arr);
     cout << p.first << " and " << p.second;
     return 0;
 }