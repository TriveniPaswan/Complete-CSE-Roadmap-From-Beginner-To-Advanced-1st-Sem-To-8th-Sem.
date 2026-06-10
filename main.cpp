#include<bits/stdc++.h>
using namespace std;



// return pairsum in sorted array with tar .. o(n power 2 and o(n) )........
// and two pointer approach..........


class pairsum{
 public:
   vector<int>findPair()
   {
       vector<int>arr={2,7,9,11};
       int tar=9;
       int n=arr.size();
       vector<int>ans;
       
       for(int i=0; i<n; i++){
           for(int j=i+1; j<n; j++)
           {
              if(arr[i]+arr[j]==tar)
              {
                  ans.push_back(i);
                  ans.push_back(j);
                  return ans;
              }
           }
           
       }
       
       return ans;
       
   }
    
};

int main()
{
    pairsum obj;
    vector<int>ans=obj.findPair();
    for(int x : ans) {
        cout<<x<<" ";
        
    }
    return 0;
}



/* 
while(st<=end) {
    int ps=arr[st]+arr[end];
    if(ps>tar) ps--;
    else if(tar<ps) st++; 
    else ans.pb(i) and ans.pb(j) return ans;
}




*/