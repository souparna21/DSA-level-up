/* Given an array of size N, find the minimum number of swaps needed
to make the array as sorted.

INPUT
a1= [5,4,3,2,1]
OUTPUT
2   */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int countMinSwaps(vector<int> arr)
{
    // Know the actual positions of elements(sorting)
    // store the current indices
    int ans = 0;
    int n= arr.size();
    pair<int, int> ap[100];
    for(int i=0; i<n ; i++){
        ap[i].first = arr[i];
        ap[i].second = i;
    }

    //sorting
    sort(ap,ap+n);

    //build the main logic
    vector<bool> visited(n,false);

    for(int i=0; i<n ; i++){
        // if element is visited or element is in right position
        int old_position = ap[i].second;
        if(visited[i] == true || old_position == i){
            continue;
        }
        
        // visiting the element(index) for first time
        int node = i;
        int cycle = 0;

        while(visited[node]){
            visited[node] = true;
            int next_node = ap[node].second;
            node = next_node;
            cycle += 1;
        }
        
        ans += (cycle-1);
    }
    return ans;
}

int main()
{
    vector<int> arr{5,4,3,2,1};
    cout << countMinSwaps(arr) << endl;
    return 0;
}