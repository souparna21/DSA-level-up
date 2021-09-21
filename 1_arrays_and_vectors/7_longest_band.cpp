/* INPUT
   [1,9,3,0,18,5,2,4,10,7,12,6]
   OUTPUT
   8
   
   Explanation
   Largest subset conraining consecutive numbers is {0,1,2,3,4,5,6,7} */

   #include<iostream>
   #include<vector>
   #include<unordered_set>

   using namespace std;

   int largestBand(vector<int> a)
   {
       int n = a.size();
       unordered_set<int> s;
       for(int i : a){
           s.insert(i);
       }
       int largestlength = 1;
       for(auto n : a){    
           if(s.find(n-1) == s.end()){
               int next_no = n+1;
               int cnt =1;

               while(s.find(next_no) != s.end()){
                   next_no++;
                   cnt++;
               }
               if(cnt>largestlength){
                   largestlength = cnt;
               }
               // or
               // largestlength = max(largestlength,cnt);
           }

       }
       return largestlength;
   }

   int main()
   {
       vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6};
       cout << largestBand(arr);
       return 0;
   }


   /*
#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int longestBand(vector<int> a)
{
    int result=0;
    int n=a.size();
    unordered_set<int> s;
    for(auto i:a){
        s.insert(i);
    }
    for(int i=0; i<n; i++){
        if(s.find(a[i]-1) == s.end()){
            int cnt=1;
            int nn=a[i]+1;
            while(s.find(nn) != s.end()){
                cnt++;
                nn++;
            }
            result=max(result,cnt);
        }
    }
    return result;
}

int main()
{
    vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6};
    cout << longestBand(arr);
    return 0;
} 
   */