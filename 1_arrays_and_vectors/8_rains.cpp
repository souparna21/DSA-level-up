/* Given n non-negative integers representing an elevation map where the width of 
   each bar is 1, compute how much water it can trap after raining.
   
INPUT
height= [0,1,0,2,1,0,1,3,2,1,2,1]

OUTPUT
6 */

#include<iostream>
#include<vector>

using namespace std;

int trappedWater(vector<int> height)
{
    int n=height.size();
    if(n<=2){
        return 0;
    }
    vector<int> rightArr(n,0),leftArr(n,0);
    leftArr[0]= height[0];
    rightArr[n-1] = height[n-1];

    for(int i=1; i<n ; i++){
        leftArr[i]=max(leftArr[i-1],height[i]);
        rightArr[n-i-1]=max(rightArr[n-i],height[n-i-1]);
    }

    int water=0;
    for(int i=0; i<n; i++){
        water += min(leftArr[i],rightArr[i]) - height[i];
    }
    return water;
}

int main()
{
    vector<int> water= {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trappedWater(water) << endl;
    return 0;
}