// Last updated: 8/26/2025, 12:31:39 PM
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n=dimensions.size();
        int m=dimensions[0].size();
        int maxArea=INT_MIN;
        int maxDiag=0;
        int area=0;
        int diagLen=0;
        for(int i=0;i<n;i++){
           
             int len=dimensions[i][0];
            int width=dimensions[i][1];

            diagLen=(len*len)+(width*width);
            area=len*width;
            if(diagLen>maxDiag){
            maxDiag=diagLen;
            maxArea=area;
            }
            else if(diagLen==maxDiag){
                if(area>maxArea){
                    maxArea=area;
                }
            }
        }
        return maxArea;
    }
};