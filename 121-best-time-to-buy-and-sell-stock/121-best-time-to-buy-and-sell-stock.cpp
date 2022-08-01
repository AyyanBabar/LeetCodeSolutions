class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ret=INT_MIN;
        int min=INT_MAX;
        int max=INT_MIN;
        for(auto n:prices){
            if(min>n){
                min=n;
                max=INT_MIN;
            }
            if(max<n){
                max=n;
            }
            if(max-min>ret){
                ret=max-min;
            }
        }
        return ret;
    }
};