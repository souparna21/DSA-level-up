/* Given an array containing integers, you need to count the total number of
inversions.
Inversion:- Two elements a[i] and a[j] form an inversion if a[i]>a[j] andi<j

INPUT
[0,5,2,3,1]

OUTPUT
5  */

#include<iostream>
#include<vector>

using namespace std;

int merge(vector<int> &a, int s, int e)
{
    int i=s;
    int m=(s+e)/2;
    int j=m+1;
    int cnt=0;
    vector<int> temp;
    while(i<=m && j<=e){
        if(a[i] < a[j]){
            temp.push_back(a[i++]);
        }
        else{
            cnt += (m-i+1);
            temp.push_back(a[j++]);
        }
    }
    while(i <= m){
        temp.push_back(a[i++]);
    }
    while(j <= e){
        temp.push_back(a[j++]);
    }
    int k=0;
    for(int idx=s; idx<=e; idx++){
        a[idx]=temp[k++];
    }
    return cnt;
}

int inverseCount(vector<int> &a, int s, int e)
{
    if(s >= e){
        return 0;
    }
    int m=(s+e)/2;  
    int c1= inverseCount(a,s,m);
    int c2= inverseCount(a,m+1,e);
    int ci= merge(a,s,e);
    return c1+c2+ci;
}

int main()
{
    vector<int> arr{0,5,2,3,1};
    int s=0;
    int e=arr.size()-1;
    cout << inverseCount(arr,s,e);
    return 0;
}