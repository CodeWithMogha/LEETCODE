class Solution {
public:
    int maxProfit(vector<int>& arr) {

        int buy = arr[0];
        int sell = 0;

        for(int i = 1; i < arr.size(); i++) {

            if(arr[i] < buy) {
                buy = arr[i];
            }
            else {

                int profit = arr[i] - buy;

                if(profit > sell) {
                    sell = profit;
                }
            }
        }

        return sell;
    }
};