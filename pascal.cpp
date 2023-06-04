#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    int i = 0, j;
    vector<vector<int>> pascal(numRows); 
       while(i<numRows)
       {
           j=0;
           while(j<=i)
           {
               if(j==0 || j==i) pascal[i].push_back(1);
               else pascal[i].push_back(pascal[i-1][j-1]+pascal[i-1][j]);
               j++;
           }
           i++;
       }
       return pascal; 
    }
};